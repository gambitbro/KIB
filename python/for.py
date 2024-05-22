
def min():
    for looper in [1,2,3,4,5]:
        print("hello", looper, end=" ")      #hello 뒤에 숫자가 붙어서 출력
        print("world")
    
    for i in range(100):        #맨 마지막 100은 포함안됨, 0 ~ 99
        print("hello", i, end=" ")
    print()

    for i in range(0, 100, 2):  # 0부터 99까지 2칸씩
        print("hello", i, end=" ")
    print()

    for i in 'abcdefg':
        print(i)

if __name__ == "__main__":
    min()