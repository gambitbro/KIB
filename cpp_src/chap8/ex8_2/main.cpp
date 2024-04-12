#include <iostream>
#include <string>
using namespace std;

class Point{
protected:
    int x, y;
public:
    Point(int x=0, int y=0);

    void set(int x, int y);
    void showPoint();
};

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::set(int x, int y)
{
    this->x = x;
    this->y = y;
}
void Point::showPoint()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

class ColorPoint : public Point{
    string color;
public:
    void setColor(string color);
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color)
{
    this->color = color;
}

void ColorPoint::showColorPoint()
{
    cout << this->color << " : ";
    this->showPoint(); 
}

bool ColorPoint::equals(ColorPoint p)
{
    if(x == p.x && y == p.y && color == p.color){
        return true;
    }else{
        return false;
    }
}

int main(void)
{
    Point p;
    p.set(2, 3);
    //p.x = 5;      //protected는 메인함수에서 접근이 안된다.
    //p.y = 5;
    p.showPoint();
    
    ColorPoint cp;
    //cp.x = 10;      //protected는 메인함수에서 접근 안된다니까?
    cp.set(3, 4);
    cp.setColor("Red");


    ColorPoint cp2;
    cp2.set(3, 4);
    cp2.setColor("Red");
    cp2.showColorPoint();

    cout << ( (cp.equals(cp2))? "true" : "false" ) << endl;
    return 0;
}