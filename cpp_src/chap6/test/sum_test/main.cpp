#include <iostream>
using namespace std;

int sum(int a, int b=40, int c=30)
{
    return a+b+c;
}

int main(void)
{
    int res = 0;
    res = sum(10);
    cout << "res = " << res << endl; 
    res = sum(10, 20);
    cout << "res = " << res << endl; 
    res = sum(10, 20, 30);
    cout << "res = " << res << endl; 
    
    
    return 0;
}