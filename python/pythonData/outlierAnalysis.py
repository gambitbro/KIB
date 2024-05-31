import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import statsmodels.api as sm
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error, r2_score
from statsmodels.stats.outliers_influence import OLSInfluence

def main():
    folder = "/home/qq43/KIB/python/pythonData/data/"
    house : pd.DataFrame = pd.read_csv(folder + "house_sales.csv", sep='\t')
    print(house.head())
    print(house.info())
    house_98105 = house.loc[house['Zipcode'] == 98105, :]
    predictors = ['SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    outcome = 'AdjSalePrice'
    print(house.groupby('Zipcode')['AdjSalePrice'].mean())

    house_outlier = sm.OLS(house_98105[outcome], house_98105[predictors].assign(const=1))
    results_98105 = house_outlier.fit()
    influence = results_98105.get_influence()
    sresiduals = influence.resid_studentized_internal
    print(sresiduals.idxmin(), sresiduals.idxmax())

    outlier = house_98105.iloc[[sresiduals.idxmax()], :]
    print(f"AdjSalePrice: {outlier['AdjSalePrice'].values[0]:.3f}")

    

if __name__ == "__main__":
    main()