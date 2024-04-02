#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;                 //멤버 변수(속성, 정보)

    Circle();       //생성자 함수, 기본으로 호출됨
    Circle(int r);  //매개변수가 있는 생성자 함수 

    double getArea(void);       //멤버 함수(행동, 행위)
};

//클래스 구현 (보통 함수 구현)
double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1){}; //생성자 함수 : 객체가 생성될 때 자동으로 호출되는 함수

Circle::Circle(int r)
{
    radius = r;
    cout << r << endl;
}

//클래스 선언
class Rectangle{
public:
    int width;
    int height;
    double getArea(void);
};

//클래스 구현
double Rectangle::getArea(void)
{
    return width * height;
}


int main()
{
    Circle donut(1);
    // donut.radius = 1;
    // double area = donut.getArea();
    // cout << "donut의 면적은 " << area << endl;
    
    Circle pizza(30);
    pizza.radius = 30;
    double area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;

    Rectangle box;
    box.width = 100;
    box.height = 150;
    area = box.getArea();
    cout << "box의 면적은 " << area << endl;

    return 0;
}