#include <iostream>
using namespace std;

class Rect;
class RectManager;

//클래스 선언
class RectManager{
public:
    bool equals(Rect r, Rect s);
};

class Rect{
    int width;
    int height;
public:
    Rect(int w, int h);
    friend bool RectManager::equals(Rect r, Rect s);     //equals 일반함수를 friend로 선언
};

//클래스 구현---
Rect::Rect(int w, int h)
{
    this->width = w;
    this->height = h;
}

bool RectManager::equals(Rect r, Rect s)
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
    RectManager man;

    if(man.equals(a, b)){
        cout << "equal" << endl;
    }else{
        cout << "not equal" << endl;
    }
    return 0;
}

