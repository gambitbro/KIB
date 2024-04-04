#include <iostream>
using namespace std;

//Circle클래스 선언
class Circle{
public:
    int radius;               

    Circle();
    Circle(int r);

    double getArea(void);
    void setRadius(int r);
};
//--------------------------------------------------------------------------------
//Circle클래스 구현
double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(int r)
{
    radius = r;
}

void Circle::setRadius(int r)
{
    radius = r;
}

//--------------------------------------------------------------------------------
int main(void)
{
    Circle circleArray[5] = { Circle(10), Circle(20), Circle() };

    int circleArraySize = sizeof(circleArray);

    for(int i = 0; i < sizeof(circleArray)/sizeof(circleArray[0]); ++i){
        cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
    }
    
    cout << circleArraySize << endl;        //circleArray 배열의 사이즈
    cout << sizeof(circleArray)/sizeof(circleArray[0]) << endl;

    return 0;
}
