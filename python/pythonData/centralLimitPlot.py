import numpy as np
import pandas as pd
import seaborn as sns


def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    loans_income : pd.DataFrame = pd.read_csv(folder + "loans_income.csv")
    print(loans_income.info())
    print(loans_income.head())

    sample_mean_05 = pd.DataFrame{(
        'income': loans_income.sample(5).mean()
    )}

if __name__ == "__main__":
    main()