def kwargs_test(**kwargs):
    print(kwargs)
    print(type(kwargs))
    print(f"첫 변수는 {kwargs['first']}이다.")
    print(f"두 번째 변수는 {kwargs['second']}이다.")
    print(f"세 번째 변수는 {kwargs['third']}이다.")
    for key, value in kwargs.items():           #items() 사용, 키-값 쌍을 튜플의 형태로 반환
        print(f"Key : {key}, Value : {value}")

def kwargs_test2(*args, **kwargs):      # 만약 a=2로 디폴트를 써주면 a가 빠진 나머지만 들어간다
    print(args)
    print(kwargs)

def main():
    kwargs_test(first = 3, second = 4, third = 5)
    kwargs_test2(1, 3.14, a=2, b=3, c=4)

if __name__ == "__main__":
    main()