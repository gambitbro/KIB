#include <iostream>
using namespace std;

class Tower{
public:
    int height;

    //생성자
    Tower();
    Tower(int h);

    //소멸자
    ~Tower();

    //높이 리턴 함수
    int getHeight();
};

Tower::Tower()
{
    height = 1;
}
void f();
Tower::Tower(int h)
{
    height = h;
}

Tower::~Tower()
{
    cout << "객체가 소멸되었습니다.\n";
}

int Tower::getHeight()
{
    return height;
}

int main(void)
{
    Tower myTower;
    Tower seoulTower(100);

    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    
    return 0;
}