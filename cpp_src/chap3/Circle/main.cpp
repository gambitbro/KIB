#include <iostream>

using namespace std;

#include "circle.h"

int main(void)
{
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
    return 0;
}