#include <iostream>
using namespace std;

class Rectangle{
public:
    int width, height;  //너비와 높이
    //생성자
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int len);

    bool isSquare();
};

//생성자 구현(기본)
Rectangle::Rectangle()
{
    width = height = 1;
}

//생성자 구현(2)
Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

//생성자 구현(3)
Rectangle::Rectangle(int len)
{
    width == height == len;
}

// bool 함수 구현
bool Rectangle::isSquare()
{
    if(width == height){
        return true;
    }else{
        return false;
    }
}

int main(void)
{
    // 객체 구현
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()){
        cout << "rect1은 정사각형이다." << endl;
    }else{
        cout << "rect1은 정사각형이 아니다." << endl;
    }

    if(rect2.isSquare()){
        cout << "rect2은 정사각형이다." << endl;
    }else{
        cout << "rect2은 정사각형이 아니다." << endl;
    }
    
    if(rect3.isSquare()){
        cout << "rect3은 정사각형이다." << endl;
    }else{
        cout << "rect3은 정사각형이 아니다." << endl;
    }

    return 0;
}