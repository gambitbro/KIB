#include <iostream>
using namespace std;

class Person{
public:
    int money;  //개인 소유의 돈
    void addMoney(int money);
    static int sharedMoney;     //공금
    static void addShared(int n);
};

int Person::sharedMoney = 10;       //static 변수는 전역에서 초기화

void Person::addMoney(int money)
{
    this->money += money;
}

// static 멤버 함수
void Person::addShared(int n)
{
    sharedMoney += n;       //static 멤버 함수는 static 멤버 변수만 갖다 쓸 수 있다.
}

int main(void)
{
    cout << Person::sharedMoney << endl;
    Person::addShared(100);
    cout << Person::sharedMoney << endl;
    
    cout << "-------------------------------------------" << endl;
    Person han;
    han.money = 100;
    han.sharedMoney = 200;

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << ' ' << lee.money << endl;
    cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;

    return 0;
}