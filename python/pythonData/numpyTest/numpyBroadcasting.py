import numpy as np

def main():
    # 브로드캐스팅 연산 (broadcasting operations)
    # 더하려고 하는 행렬의 차원에 맞게 증식하여 연산된다.
    x = np.arange(1, 10).reshape(3,3)
    print(x)
    print(x + 10)
    print(x // 3)

    # 확장된 브로드캐스팅
    x = np.arange(1,13).reshape(4,3)
    v = np.arange(10,40,10)

    print(x + v)

    # 추가
    x = np.arange(1,6)
    y = np.arange(10,50,10).reshape(4,-1)

    print(x)
    print(y)
    print(x + y)
  

    
if __name__ == "__main__":
    main()
