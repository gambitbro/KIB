import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import random
import scipy.stats as stats

def perm_func(x : pd.Series, nA, nB):
    n = nA + nB
    idx_b = set(random.sample(range(n), nB))
    idx_a = set(range(n)) - idx_b
    return x.loc[list(idx_b)].mean() - x.loc[list(idx_a)].mean()


def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    session_times : pd.DataFrame = pd.read_csv(folder + "web_page_data.csv")
    session_times["Time"] = session_times["Time"] * 100
    print(session_times)
    print(session_times.info())
    print(mean_a := session_times[session_times.Page == "Page A"].Time.mean())
    print(mean_b := session_times[session_times.Page == "Page B"].Time.mean())
    print(mean_b - mean_a)

    res = stats.ttest_ind(session_times[session_times.Page == "Page A"].Time, 
                          session_times[session_times.Page == "Page B"].Time, 
                          equal_var=False)

    print(f"t-statistic: {res.statistic:.3f}")
    print(f"p-value single sided test: {res.pvalue / 2:.3f}")
if __name__ == "__main__":
    main()