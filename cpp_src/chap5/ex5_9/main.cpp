#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(const Circle& c);    //복사 생성자 선언
    Circle();
    Circle(int radius);

    double getArea();
};


Circle::Circle()
{
    this->radius = 1;
}
Circle::Circle(const Circle &c)
{
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius)
{
    this->radius = radius;
    cout << "생성자의 실행" << endl;
}
double Circle::getArea()
{
    return 3.14*radius*radius;
}


int main(void)
{
    Circle src(30);
    Circle dest(src);

    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl;
    return 0;
}