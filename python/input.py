def min():
    somebody = input("Enter your name: ")       #string으로 처리하여 변수에 집어넣음.
    print("Hi", somebody, "How are you today?")
    inta = int(input("Enter a number: "))
    print(inta*3)       #string이기때문에 결과는 333으로 이어져서 나온다. 그래서 int를 붙여준다.

    print(f"Hi {somebody} How are you today?")      #fstring 사용사례, 요즘은 이걸로 자주 씀.
if __name__ == "__main__":
    min()