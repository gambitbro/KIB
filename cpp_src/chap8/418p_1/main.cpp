#include <iostream>
using namespace std;

class Circle{
protected:
    int radius;
public:
    Circle(int radius=0);
    int getRadius();
    void setRadius(int radius);
    double getArea();
};

Circle::Circle(int radius)
{
    this->radius = radius;
}
int Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(int radius)
{
    this->radius = radius;
}
double Circle::getArea()
{
    return 3.14*radius*radius;
}

class NamedCircle : public Circle{
    string name;
public:
    NamedCircle(int radius=0, string name="");
    void show();
    void setNamedCircle(int radius, string name);
};

NamedCircle::NamedCircle(int radius, string name) : Circle(radius)
{
    setRadius(radius);
    this->name = name;
}

void NamedCircle::show()
{
    cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
}

void NamedCircle::setNamedCircle(int radius, string name)
{
    this->radius = radius;
    this->name = name;
}

int main(void)
{
    NamedCircle waffle(3, "waffle");
    waffle.show();

    NamedCircle pizza[5];
    NamedCircle donut(10);
    int r;
    string n;

    // cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;

    // for(int i=0; i<5; ++i){
    //     cout << (i+1) << ">> ";
    //     cin >> r >> n;
    //     pizza[i].setNamedCircle(r, n);
        
    //     int max = pizza[0].getArea();
    //     for(int i=0; i<5; ++i){
    //         if(pizza[i].getArea() > max){
    //             max = pizza[i].getArea();
    //         }
    //     }
    //     if( == max){

    //     }
    // }
    return 0;
}