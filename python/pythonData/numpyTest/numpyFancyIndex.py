import numpy as np

def main():
    x = np.array([4,6,7,3,2])

    # boolean index
    cond = x > 3
    print(f"cond : {cond}")
    print(f"x[cond] : {x[cond]}")
    #실전
    print(f"x[x > 3] : {x[x > 3]}")

    # fancy index
    cond = np.array([1,2,0,2,2,2,1,0,1,0])
    cond2 = np.random.randint(0,5,30)
    print(f"x : {x}")
    print(f"cond : {cond}")
    print(f"x[cond] : {x[cond]}")
    print(f"cond2 : {cond2}")
    print(f"x[cond2] : {x[cond2]}")

    # 랜덤한 요소를 가진 배열을 sort
    x = np.random.randint(1,1000,30)
    print(f"x[x.argsort() : {x[x.argsort()]}")

    Z = np.array([6,6,6,4,7,9,1,8,8,4])
    Z[Z.argsort()[:5]] = 0
    print(Z)

if __name__ == "__main__":
    main()
