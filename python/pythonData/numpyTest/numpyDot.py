import numpy as np

def main():
    x_1 = np.arange(1,7).reshape(2,3)       # 2*(3) 과 (3)*2 행렬연산을 위해서는 숫자를 맞춰줘야한다.
    x_2 = np.arange(1,7).reshape(3,2)
    x_3 = x_1.dot(x_2)
    print(x_1)
    print(x_2)
    print(x_3)

    
if __name__ == "__main__":
    main()
