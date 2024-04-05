#include <iostream>
using namespace std;

void half(double n)
{
    n = n/2;
}

void half2(double &a)
{
    a = a/2;
}

void half3(double *p)
{
    *p = *p/2;
}



int main(void)
{
    double n = 20;
    
    half(n);

    cout << n << endl;

    half2(n);

    cout << n << endl;

    double *p = &n;
    half3(&n);

    cout << n << endl;

    return 0;
}

