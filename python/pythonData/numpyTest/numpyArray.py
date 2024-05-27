#numpy 실습, 파이썬 머신러닝 책 p80

import numpy as np

def main():
    li1 = [[1,2,3],[1,2,3],[1,2,3]]

    test_array = np.array(li1, dtype=np.uint8)
    print(type(test_array))
    print(test_array)
    print(test_array.dtype) # 데이터 타입을 리턴, 4번줄에서 uint8로 지정해놨기 때문에 uint8로 되어있음
    print(test_array.shape) # 배열의 구조 리턴
    print(test_array.ndim)  # 차원을 리턴
    print(test_array.size)  # 전체 요소 개수를 리턴
    for i in test_array:
        print(i)

if __name__ == "__main__":
    main()