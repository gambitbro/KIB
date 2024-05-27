import os
import pandas as pd
import numpy as np
from statsmodels import robust
from scipy import stats
import wquantiles
import matplotlib.pyplot as plt

def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    dfw = pd.read_csv(folder + "dfw_airline.csv")
    ax = dfw.transpose().plot.bar(figsize=(4,4), legend=False)
    ax.set_xlabel('Cause of delay')
    ax.set_ylabel('Count')
    plt.show()

    
    

if __name__ == "__main__":
    main()