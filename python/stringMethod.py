def main():
    a = str()
    #len(a)      #len는 a의 메소드이긴하지만 이런식으로 쓴다
    text = "TEAMLAB X Inflearn"
    text.upper()        #이렇게 쓰기만하면 안되고 변수에 넣어줘야함 7번줄처럼
    print(text)
    a = text.upper()
    print(a)
    print(text.capitalize())
    print(text.count('A'))      #대문자 A가 몇개인지 반환
    print(text.isdigit())
    li1 = text.split(sep='X')
    print(li1)
    
if __name__ == "__main__":
    main()