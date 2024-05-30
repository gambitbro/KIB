import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import random

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

    # fig = plt.figure()
    # ax = fig.add_subplot()
    # session_times.boxplot(by='Page', column='Time', ax=ax)
    # plt.show()

    # 순열 검정
    nA = session_times[session_times.Page == "Page A"].shape[0]
    nB = session_times[session_times.Page == "Page B"].shape[0]
    perm_diffs = [perm_func(session_times.Time, nA, nB) for _ in range(1000)]

    fig = plt.figure()
    ax = fig.add_subplot()
    ax.hist(perm_diffs, bins=11, rwidth=0.9)
    ax.axvline(x=mean_b - mean_a, color='black', lw=2)
    ax.text(50, 190, 'Observed\ndifference', bbox={'facecolor':'white'})
    ax.set_xlabel('session time difference (in seconds)')
    ax.set_ylabel('frequency')
    print(np.mean(np.array(perm_diffs) > mean_b - mean_a))
    plt.show()

if __name__ == "__main__":
    main()