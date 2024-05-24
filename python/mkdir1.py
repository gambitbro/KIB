import os
import datetime
import random

def main():
    # 현재 워킹 디렉토리 확인
    print(os.getcwd())
    # 워킹 디렉토리 변경
    os.chdir("log")

    if not os.path.isdir("log"):            # 있는지 먼저 체크를 하고, 없으면 만든다
        os.mkdir("log")

    if not os.path.exists("log/count_log.txt"):
        with open("log/count_log.txt", "w", encoding="UTF8") as f:
            f.write("기록이 시작됩니다.\n")
    with open("log/count_log.txt", "w", encoding="UTF8") as f:
        for i in range(1, 11):
            stamp = str(datetime.datetime.now())
            value = random.random() * 1000000
            log_time = stamp + "\t" + str(value) + "값이 생성되었습니다.\n"
            f.write(log_time)

if __name__ == "__main__":
    main()