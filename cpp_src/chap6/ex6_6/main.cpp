#include <iostream>
using namespace std;

class MyVector{
    int *p;
    int size;
public:
    MyVector(int n=100);
    ~MyVector();
};

MyVector::MyVector(int n)
{
    this->p = new int [n];
    this->size = n;
}

MyVector::~MyVector()
{
    delete [] this->p;
}

int main(void)
{
    MyVector *v1, *v2;
    v1 = new MyVector();
    v2 = new MyVector(1024);

    delete v1;
    delete v2;
    return 0;
}