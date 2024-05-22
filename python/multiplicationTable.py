def main():
    print("구구단 몇 단을 계산할까요? : ")
    user_input = input()
    print(f"구구단 {user_input}단을 계산합니다.")
    int_input = int(user_input)
    for i in range(1, 10):
        print(f"{user_input} X {i} = {int_input * i}")

if __name__ == "__main__":
    main()