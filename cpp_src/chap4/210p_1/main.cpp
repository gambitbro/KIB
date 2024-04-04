#include <iostream>
using namespace std;

class Color{
    int red, green, blue;
public:
    Color();
    Color(int r, int g, int b);
    void setColor(int r, int g, int b);
    void show();
};

Color::Color()
{
    red = green = blue = 0;
}
Color::Color(int r, int g, int b)
{
    red = r;
    green = g;
    blue = b;
}
void Color::setColor(int r, int g, int b)
{
    red = r;
    green = g;
    blue = b;
}
void Color::show()
{
    cout << red << ' ' << green << ' ' << blue << endl;
}

int main(void)
{
    Color screenColor(255, 0, 0);
    Color *p;
    p = &screenColor;   //1
    p->show();          //2
    Color colors[3];    //3
    p = colors;         //4

    colors[0].setColor(255, 0, 0);
    colors[1].setColor(0, 255, 0);
    colors[2].setColor(0, 0, 255);

    for(int i = 0; i < 3; ++i){
        colors[i].show();
    }
    return 0;
}