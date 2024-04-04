#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r);
    double getArea();
};

Circle::Circle()
{
    radius = 1;
}
Circle::Circle(int r)
{
    radius = r;
}
Circle::~Circle()
{
    // 객체 소멸
}
void Circle::setRadius(int r)
{
    radius = r;
}
double Circle::getArea()
{
    return 3.14*radius*radius;
}

int main(void)
{
    // Circle *pArray = new Circle [3];        //객체 배열의 동적 생성
    // pArray[0].setRadius(10);
    // pArray[1].setRadius(20);
    // pArray[2].setRadius(30);

    Circle *pArray = new Circle [3] {Circle(10), Circle(20), Circle(30)};   //객체 배열의 동적 생성 및 초기화

    for(int i = 0; i < 3; ++i){
        cout << pArray[i].getArea() << endl;
    }

    Circle *p = pArray;
    for(int i = 0; i < 3; ++i){
        cout << (p+i)->getArea() << endl;
    }

    delete [] pArray;       //객체 배열 반환
    return 0;
}