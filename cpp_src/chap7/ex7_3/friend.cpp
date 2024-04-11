#include <iostream>
using namespace std;

class Rect;
class RectManager;

//클래스 선언
class RectManager{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect &dest, Rect &src);
};

class Rect{
    int width;
    int height;
public:
    Rect(int w, int h);
    // friend bool RectManager::equals(Rect r, Rect s);
    // friend void RectManager::copy(Rect &dest, Rect &src);
    friend RectManager; // 클래스를 그냥 써주면 그 안의 모든 함수가 friend가 된다.
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

void RectManager::copy(Rect &dest, Rect &src)
{
    dest.width = src.width;
    dest.height = src.height;
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
        man.copy(b, a);
    }
    cout << man.equals(a, b) << endl;
    
    return 0;
}

