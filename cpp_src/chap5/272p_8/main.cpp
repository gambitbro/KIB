#include <iostream>
using namespace std;

class MyIntStack{
    int *p;
    int tos;
    int size;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack &c);
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack()
{
    tos = 0;
}

MyIntStack::MyIntStack(int size)
{
    
}

MyIntStack::~MyIntStack()
{

}

MyIntStack::MyIntStack(const MyIntStack &c)
{

}

bool MyIntStack::push(int n)
{
    
}
bool MyIntStack::pop(int &n)
{
  
}


int main(void)
{
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b(a);
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
}