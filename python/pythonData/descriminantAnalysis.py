import numpy as np
import pandas as pd
import statsmodels as sm
from sklearn.naive_bayes import MultinomialNB


def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan3000.csv")
    print(loan_data.head())
    print(loan_data.info())
    
    #convert to categorical
    loan_data['outcome'] = loan_data['outcome'].astype('category')
    loan_data['outcome'].cat.reorder_categories(['paid off', 'default'])
    loan_data['purpose_'] = loan_data['purpose_'].astype('category')
    loan_data['home_'] = loan_data['home_'].astype('category')
    loan_data['emp_len_'] = loan_data['emp_len_'].astype('category')


if __name__ == "__main__":
    main()