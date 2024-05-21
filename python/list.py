def min():
    colors = ["red", "green", "blue", "purple", "yellow", "black", 12, 25, 71, 3.14, 7.8235]
    numbers = [12, 25, 71, 3.14, 7.8235]
    print(colors)
    # print(colors[0])
    # print(colors[1])
    # print(colors[2])
    # print(len(colors))

    for c in colors:
        print(c)
    print(len(colors))
    print(colors[5:8])      # 5번부터 7번까지
    print(colors[5:8:2])    # 5번부터 7번까지 2칸씩 띄어서 읽겠다
    print(colors[::2])
    print(colors[::-1])

    # 리스트 연산
    total_list = colors + numbers
    colors.extend(numbers)     # 위 코드와 같이 추가하는 코드
    colors.insert(0, "orange")       # 0번째에 orange를 추가, 나머지 원소들은 뒤쪽으로 한칸씩 밀린다.
    colors = colors + ["white"]     # 이렇게 해도 추가할 수 있지만,
    colors.append("white")          # 웬만하면 append 메소드를 써서 하자
    colors = colors * 2     # 리스트가 두배가 된다.
    colors.remove("white")
    colors.remove("white")
    colors.remove("white")
    colors.remove("white")
    print(total_list)
    del colors[-1]
    print(colors)
    print("white" in colors)        # True or False 로 나옴

    colors.append(numbers)
    print(colors)
    colors.remove(numbers)
    print(colors)
    print(numbers)

    

if __name__ == "__main__":
    min()

