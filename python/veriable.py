class Abc:      # class Abc(object): 와 같은 의미 
    pass


def main():
    a = int()      # 자료형은 class로 취급한다.
    a = 7.2
    a = "Hello, World"
    aStr = "astring"
    aNoIntString = "abcd"
    aYesIntString = "1234"
    a_yes_int_string = "56789"
    o = object()
    print(o)
    print(a)
    print(type(a))
    print(issubclass(type(a), int))
    print(issubclass(type(o) , object))
    print(issubclass(type(a) , object))
    print(issubclass(int, object))
    print(issubclass(float , object))
    

if __name__ == "__main__":
    main()