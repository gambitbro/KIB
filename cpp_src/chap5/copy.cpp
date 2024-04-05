#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;

    cout << a << ", " << b << endl;
    cout << *pa << ", " << *pb << endl;

    pa = pb;
    return 0;
}