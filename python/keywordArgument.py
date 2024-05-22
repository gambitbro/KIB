def print_something(my_name, your_name):
    print(f"Hello {your_name}, my name is {my_name}")

def print_something2(my_name, your_name="TEAMLAB"):
    print(f"Hello {your_name}, my name is {my_name}")

def main():
    print_something("Sungchul", "TEAMLAB")
    print_something(your_name="TEAMLAB", my_name="Sungchul")

    print_something2("Sungchul", "BINDSOFT")
    print_something2("Sungchul")        #디폴트 없이 필요한 인자만 넣어주기

if __name__ == "__main__":
    main()