def main():
    user_input = 1
    while True:
        user_input = int(input("구구단 몇 단을 계산할까요? : "))
        if user_input == 0:
            break
        if not(1 <= user_input <= 9):
            print("잘못 입력하셨습니다. 1부터 9사이의 숫자를 입력하세요")
            continue
        else:
            print(f"구구단 {user_input}단을 계산합니다.")        
            for i in range(1, 10):
                print(f"{user_input} X {i} = {user_input * i}")
    print("구구단 게임을 종료합니다.")
    
if __name__ == "__main__":
    main()