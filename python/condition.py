
def min():
    myage = int(input("나이를 넣으세용: "))
    if myage > 30 and myage < 50:
        print("클럽에 온 걸 환영해용")
    else:
        print("안돼")

    if True:                #True 와 False 의 앞이 대문자.
        print("참입니당")
    if False:
        print("거짓입니당")
    if 1:
        print("참입니당")
    if 0:
        print("거짓입니당")
    if "":
        print("장난하십니깡")
    if "abc":
        print("참입니당")
    if None:
        print("거짓입니당")
    if []:
        print("거짓입니당")
    if [1,2,3]:
        print("참입니당")
        


if __name__ == "__main__":
    min()