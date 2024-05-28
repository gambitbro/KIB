import pandas as pd

def main():
    folder = "/home/qq43/KIB/python/pythonData/pandasTest/"
    df= pd.read_excel(folder + "excel-comp-data.xlsx", engine='openpyxl')
    print(df.head(10))
    print(df.head(3).T)
    print(df.info())

    print(f"df[:3] : {df[:3]}")
    print(f"df['account'] : {df['account']}")
    print(f"df[['account', 'street', 'state']] : \n{df[['account', 'street', 'state']]}")

    print(f"df['account'][:3] : \n{df['account'][:3]}")

    # 데이터 그 자체에 접근하는법
        #index 지정
    df.index = df['account']
    del df['account']
    print(df.head())
    print(f"df.loc[[211829], ['name', 'street']] \n{df.loc[[211829], ['name', 'street']]}")

    print(f"df.iloc[:3, :2] : \n{df.iloc[:10, :3]}")

    # drop함수
    df_new = df.reset_index()
    df.drop(1).head()
    print(df.head())
    
if __name__ == "__main__":
    main()