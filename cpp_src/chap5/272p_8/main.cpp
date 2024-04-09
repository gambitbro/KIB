#include <iostream>
using namespace std;

class MyIntStack{
    int *p;     //동적할당 공간 주소만 저장, 공간할당은 아직 안됨. 생성자에서 공간 할당.
    int size;   //동적 할당 공간의 크기를 저장할 변수
    int tos;    //스택의 현재 주소값 저장
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack &s);        //복사생성자
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
    void p_show();
};

MyIntStack::MyIntStack()
{
    this->size = 10;
    this->p = new int [size] {0}; // p에 동적할당공간 주소를 넣어줌
    this->tos = 0;
}

MyIntStack::MyIntStack(int size)
{
    this->size = size;
    this->p = new int [this->size] {0}; // p에 동적할당공간 주소를 넣어줌
    this->tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack &s)
{
    this->size = s.size;
    this->p = new int [this->size];
    //깊은 복사, 배열의 요소값 하나하나 복사, 주소만 복사하는 얕은복사는 안된다.
    for(int i=0; i<this->size; ++i){
        this->p[i] = s.p[i];
    }
    this->tos = s.tos;
}

MyIntStack::~MyIntStack()
{
    if(this->p){
        delete [] this->p;
    }
}

bool MyIntStack::push(int n)
{
    p[tos] = n;
    ++tos;

    if(tos > size){
        tos = (size-1);
        return false;
    }else{
        return true;
    }
}
bool MyIntStack::pop(int &n)
{
    n = p[tos-1];
    --tos;

    if(tos < -1){
        tos = 0;
        return false;
    }else{
        p[tos] = 0;
        return true;
    } 
}

void MyIntStack::p_show()
{
    for(int i=0; i<this->size; ++i){
        cout << this->p[i] << ' ';
    }
    cout << endl;
}


int main(void)
{
    MyIntStack a(10);
    a.push(10);
    a.p_show();
    a.push(20);
    a.p_show();
    MyIntStack b(a); // MyIntStack b = a;
    b.push(30);
    a.p_show();
    b.p_show();


    int n;
    if(a.pop(n)){
        cout << "스택 a에서 팝한 값 " << n << endl;
    }else{
        cout << "stack empty" << endl;
    }
    
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    a.p_show();
    b.p_show();
    return 0;
}