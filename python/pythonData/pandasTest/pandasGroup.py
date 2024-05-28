import pandas as pd


def main():
    ipl_data = {'Team': ['Riders', 'Riders', 'Devils', 'Devils', 'Kings',
                         'Kings', 'Kings', 'Kings', 'Riders', 'Royals', 'Royals',
                         'Riders'],
                'Rank': [1, 2, 2, 3, 3, 4, 1, 1, 2, 4, 1, 2],
                'Year': [2014, 2015, 2014, 2015, 2014, 2015, 2016, 2017, 2016, 2014, 2015, 2017],
                'Points': [876, 789, 863, 673, 741, 812, 756, 788, 694, 701, 804, 690]}
    df = pd.DataFrame(ipl_data)
    print(df)

    print(df.groupby("Team")[["Points", "Year"]].sum())
    print(df.groupby("Team")[["Points", "Year"]].count())
    print(df.groupby(["Team", "Year"])["Points"].sum())
    print(df.groupby(["Team", "Year"])["Points"].count())
    print(df.groupby(["Team", "Year"])["Points"].sum().unstack())
    print(df.groupby(["Team", "Year"])["Points"].sum().swaplevel())
    print(df.groupby(["Team", "Year"])["Points"].sum().swaplevel().sort_index())

if __name__ == "__main__":
    main()