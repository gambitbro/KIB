#include <iostream>
using namespace std;

class PrivateAccessError{
private:
public:
    int a;
    int b;
    void g();
    void f();
    PrivateAccessError();
    PrivateAccessError(int x);
};

PrivateAccessError::PrivateAccessError()
{
    a = 1;
    b = 1;
}

PrivateAccessError::PrivateAccessError(int x)
{
    a = x;
    b = x;
}

void PrivateAccessError::f()
{
    a = 5;
    b = 5;
}

void PrivateAccessError::g()
{
    a = 6;
    b = 6;
}


int main(void)
{
    PrivateAccessError objA;
    PrivateAccessError objB(100);


    return 0;
}