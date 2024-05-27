import os
import pandas as pd
import numpy as np
from statsmodels import robust
from scipy import stats
import wquantiles
import matplotlib.pyplot as plt

def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    state = pd.read_csv(folder + "state.csv")
    
    #표준편차
    print(f"미국 주의 인구 표준편차는 {state['Population'].std()}")
    #IQR(사분위범위)
    iqr = state['Population'].quantile(0.75) - state['Population'].quantile(0.25)
    print(f"미국 주의 사분위범위는 {iqr}")
    #MAD(중위절대편차)
    mad = robust.scale.mad(state['Population'])
    print(f"미국 주의 MAD는 {mad}")

    plt.boxplot(state['Population'])
    plt.show()
    # state['Population'].plot.box()
    # plt.show()

if __name__ == "__main__":
    main()