import scipy.stats as stats
import matplotlib.pyplot as plt

def main():
    fig = plt.figure()
    ax = fig.add_subplot()
    norm_sample = stats.norm.rvs(size=100)
    stats.probplot(norm_sample, plot=ax)
    plt.show()

if __name__ == "__main__":
    main()