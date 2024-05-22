import random
import time

def main():
    random.seed(time.time())
    guess_number = random.randint(1, 100)
    print(guess_number)
    user_input = int(input("숫자를 맞춰보세요: "))
    while user_input is not guess_number:
        if user_input > guess_number:
            print("숫자가 너무 큽니다.")
        else:
            print("숫자가 너무 작습니다.")
        user_input = int(input("다시 입력하세요."))
    print("정답입니다.")


if __name__ == "__main__":
    main()