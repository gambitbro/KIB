def min():
    sentence = "I love you"
    reverse_sentence = ""
    for char in sentence:       #data크기가 하나인 string을 하나씩 읽어오는 것
        reverse_sentence = char + reverse_sentence
    print(reverse_sentence)

    #1줄로 정리
    print(sentence[::-1])
        

if __name__ == "__main__":
    min()