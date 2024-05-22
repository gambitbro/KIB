def f(x):
    y = x
    x = 5
    return y * y

def spam(eggs):
    eggs.append(1)
    eggs = [2,3]


def main():
    x = 3
    print(f(x))
    print(x)
    ham = [0]       
    spam(ham)       #리스트로 넘기면 포인터가 넘어감 -> 값이 변함
    print(ham)

if __name__ == "__main__":
    main()