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
    Circle circleArray[3];              //객체배열
    // circleArray[0].setRadius(10);
    // circleArray[1].setRadius(20);
    // circleArray[2].setRadius(30);

    for(int i = 0; i < 3; ++i){
        circleArray[i].setRadius(10*(i+1));
        cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
    }
    
    Circle *p = circleArray;

    for(int i = 0; i < 3; ++i){
        circleArray[i].setRadius(10*(i+1));
        cout << "Circle" << i << "의 면적은 " << (p+i)->getArea() << endl;
        // ++p;
    }
    return 0;
}