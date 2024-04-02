#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl; 
    }
};

Point::Point()      //기본생성자
{
    x = 0;
    y = 0;
}

Point::Point(int a, int b)
{
    x = a;
    y = b;
}



int main(void)
{
    return 0;
}