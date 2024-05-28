# 데이터프레임 생성
import pandas as pd

def main():
    data_url = "https://archive.ics.uci.edu/ml/machine-learning-databases/housing/housing.data"
    df_data = pd.read_csv(data_url, sep='\s+', header=None)
    df = pd.DataFrame(df_data, columns=list('abcdefghijklm'))
    print(type(df))
    print(df.head(10))
    print(df.tail(3))
    print(df.info())

if __name__ == "__main__":
    main()