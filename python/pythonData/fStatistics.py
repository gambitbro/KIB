import scipy.stats as statsmodule
import numpy as np
import pandas as pd
import statsmodels.formula.api as smf

def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    session_times : pd.DataFrame = pd.read_csv(folder + "web_page_data.csv")
    model = smf.ols("Time - Page", data=session_times).fit()

if __name__ == "__main__":
    main()