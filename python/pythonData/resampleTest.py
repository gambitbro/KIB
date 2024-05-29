import sklearn.utils as resample
import numpy as np
import pandas as pd 

def main():
    folder = "/home/qq43/KIB/python/pythonData/data"
    loans_income : pd.DataFrame = pd.read_csv(folder + "loans_income.csv").squeeze('columns')
    result = []
    for nrepeat in range(1000):
        sample = resample.resample(loans_income)
        result.append(np.median(sample))
        print("부트 스트랩")
        print(f"원본 : {loans_income.median()}")
        print(f"바이어스 : {result.mean() - loans_income.median()}")
        print(f"표준편차 : {result.std()}")

if __name__ == "__main__":
    main()