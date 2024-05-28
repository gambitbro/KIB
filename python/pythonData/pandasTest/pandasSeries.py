import pandas as pd

def main():
    ex_obj = pd.Series([1,2,3,4,5])
    print(ex_obj)

    # no index
    ex_obj2 = pd.Series([1,2,3,4,5], index=['a','b','c','d','e'])
    print(ex_obj2)
    ex_obj2 = pd.Series({'a':1,'b':2,'c':3,'d':4,'e':5})
    print(ex_obj2)
    ex_obj2 = pd.Series([1,2,3,4,5], index=list('abcde'))
    print(ex_obj2)

    # slicing
    print(f"ex_obj2['a'] : {ex_obj2['a']}")
    print(ex_obj2)

    # 136p 
    ex_obj3 = pd.Series({'a':1,'b':2,'c':3,'d':4,'e':5}, name='example_data', index=list('abcdefghij'))
    print(ex_obj3)

if __name__ == "__main__":
    main()