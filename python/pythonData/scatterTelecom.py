import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns
from matplotlib.collections import EllipseCollection
from matplotlib.colors import Normalize
from statsmodels import robust


def plot_corr_ellipses(data, figsize=None, **kwargs):
    M = np.array(data)
    if not M.ndim == 2:
        raise ValueError('data must be a 2D array')
    fig, ax = plt.subplots(1, 1, figsize=figsize, subplot_kw={'aspect':'equal'})
    ax.set_xlim(-0.5, M.shape[1] - 0.5)
    ax.set_ylim(M.shape[0] - 0.5, -0.5)
    ax.invert_yaxis()

    xy = np.indices(M.shape)[::-1].reshape(2, -1).T

    w = np.ones_like(M).ravel() + 0.01
    h = 1 - np.abs(M).ravel() - 0.01
    a = 45 * np.sign(M).ravel()

    ec = EllipseCollection(widths=w, heights=h, angles=a, units='x', offsets=xy,
                           norm=Normalize(vmin=-1, vmax=1),
                           transOffset=ax.transData, array=M.ravel(), **kwargs)
    ax.add_collection(ec)

    if isinstance(data, pd.DataFrame):
        ax.set_xticks(np.arange(M.shape[1]))
        ax.set_xticklabels(data.columns, rotation=90)
        ax.set_yticks(np.arange(M.shape[0]))
        ax.set_yticklabels(data.index)

    return ec, ax


def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    sp500_px = pd.read_csv(folder + "sp500_data.csv", index_col=0)
    sp500_sym = pd.read_csv(folder + "sp500_sectors.csv")

    telecomSymbols = sp500_sym[sp500_sym['sector'] == 'telecommunications_services']['symbol']
    telecom = sp500_px.loc[sp500_px.index > '2012-07-01', telecomSymbols]
    
    print(telecom.corr())
    ax = telecom.plot.scatter(x='T', y='VZ', marker='o', alpha=0.5)
    ax.set_xlabel('AT&T')
    ax.set_ylabel('Verizon (VZ)')
    ax.axhline(0, color='gray', linewidth=0.5)
    ax.axvline(0, color='gray', linewidth=0.5)
    plt.show()


if __name__ == "__main__":
    main()