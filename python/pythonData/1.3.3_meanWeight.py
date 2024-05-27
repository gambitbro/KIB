import os
import pandas as pd
import numpy as np

from scipy import stats
import wquantiles

folder = "/home/qq43/KIB/python/pythonData/data/"

def main():
    print(os.getcwd())
    state = pd.read_csv(folder + "state.csv")
    # print(type(state))

    #어떤 컬럼들이 있는지 확인 
    print(state.head())

    # 평균
    print(f"Population의 평균은 {state['Population'].mean():.2f}")
    # 절사평균
    state_trim_mean = stats.trim_mean(state['Population'], 0.1)       #10퍼센트를 위아래로 자르겠다
    print(f"Population의 평균은 {state_trim_mean:.2f}")
    # 중간값
    state_median = state["Population"].median()
    print(f"Population의 중간값은 {state_median:.2f}")
    # 가중평균
    mean_weight = np.average(state["Murder.Rate"], weights=state["Population"])
    print(f"미국 살인률 가중 평균(인구 가중)은 {mean_weight}이다.")

    print(f"미국 살인률 평균은 {state['Murder.Rate'].mean()}이다.")

    # 가중 중간값
    wquan_median = wquantiles.median(state['Murder.Rate'], weights=state['Population'])
    print(f"미국 살인률 가중 중간값(인구 가중)은 {wquan_median}이다.")

if __name__ == "__main__":
    main()