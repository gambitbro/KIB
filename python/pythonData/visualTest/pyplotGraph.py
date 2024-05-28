import matplotlib.pyplot as plt
import numpy as np

def main():
    data_1 = np.random.rand(512, 2)
    data_2 = np.random.rand(512, 2)
    A1 = np.random.rand(512, 2) * 150
    colors = np.random.rand(512, 2)
    for i in range(2):
        plt.scatter(data_1[:,i], data_2[:,0], s=A1[:,i], c=colors[:,i], alpha=0.5)

    # plt.scatter(data_1[:,0], data_1[:,1], s=A1[:,0], c="b", alpha=0.5)
    # plt.scatter(data_2[:,0], data_2[:,1], s=A1[:,1], c="r", alpha=0.5)
    plt.show()

if __name__ == "__main__":
    main()