import pandas as pd
import numpy as np

def main():
    viagra_spam = {"viagra": [1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1],
                   "spam": [1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1]
    }
    df = pd.DataFrame(viagra_spam)

    # np_data = df.to_numpy()
    np_data = df.to_numpy()
    print(type(df), type(np_data))

    # P(viagra|spam)
    p_viagra_cap_spam = sum(np_data[:,0] & np_data[:,1]) / sum(np_data[:,1])
    print(p_viagra_cap_spam)

    # P(viagra)
    p_viagra = sum(np_data[:,0]) / len(np_data[:,0])
    print(p_viagra)

if __name__ == "__main__":
    main()