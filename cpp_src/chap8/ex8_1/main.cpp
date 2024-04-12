#include <iostream>
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

int main(void)
{
    Point p;
    ColorPoint cp;

    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();
    return 0;
}