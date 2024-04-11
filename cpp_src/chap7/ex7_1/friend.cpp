#include <iostream>
using namespace std;

//클래스 선언
class Rect;     //밑에 equals함수에서 매개변수로 객체를 쓰기 때문에, 이 선언이 없으면 오류가 생긴다.

//일반 함수 선언---
bool equals(Rect r, Rect s);        //클래스 두개를 매개변수로 가진 일반함수

//클래스 선언
class Rect{
    int width;
    int height;
public:
    Rect(int w, int h);
    friend bool equals(Rect r, Rect s);     //equals 일반함수를 friend로 선언
};

//클래스 구현---
Rect::Rect(int w, int h)
{
    this->width = w;
    this->height = h;
}

//일반 함수 구현---
bool equals(Rect r, Rect s)
{
    if( (r.width == s.width) && (r.height == s.height) ){
        return true;
    }else{
        return false;
    }
}

//메인 함수---
int main(void)
{
    Rect a(3, 4);
    Rect b(4, 5);

    cout << equals(a, b) << endl;

    return 0;
}

