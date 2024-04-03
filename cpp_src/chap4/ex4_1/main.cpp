#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;               

    Circle();
    Circle(int r);

    double getArea(void);
};

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

//클래스 선언
class Rectangle{
public:
    int width;
    int height;
    double getArea(void);
};

//Rectangle클래스 구현
double Rectangle::getArea(void)
{
    return width * height;
}


int main()
{
    return 0;
}