def main():
    filename = "/home/qq43/KIB/python/yesterday.txt"
    with open(filename, "r") as f:
        cont = f.read()
        #cont = f.readlines()
    # for c in cont:
    #     print(c, end="")

    # with open(filename, "r") as f:
    #     while con := f.readline():      #변수의 저장과 동시에 비교할 때 := 사용
    #         print(con)
    word_list = cont.split()
    line_list = cont.split("\n")

    print(f"총 글자 수 {len(cont)}")
    print(f"총 단어 수 {len(word_list)}")
    print(f"총 줄 수 {len(line_list)}")

if __name__ == "__main__":
    main()