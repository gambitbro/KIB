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
    
    # frequency table
    binnedPopulation = pd.cut(state['Population'], 10)
    binnedPopulation.value_counts()
    print(binnedPopulation)
    print(binnedPopulation.value_counts())

    # 히스토그램1
    # plt.hist(state['Population'], bins=10)
    # plt.show()
    
    # 히스토그램2
    # state['Population'].plot.hist(bins=10)

    # 히스토그램3 
    # ax1 = state['Population'].plot.hist(bins=10)
    # plt.show()

    #밀도그림
    ax = state['Murder.Rate'].plot.hist(density=True, xlim=[0,12], bins=range(1,12))
    state['Murder.Rate'].plot.density(ax = ax)
    ax.set_xlabel('Murder Rate (per 100,000)')
    plt.show()

if __name__ == "__main__":
    main()