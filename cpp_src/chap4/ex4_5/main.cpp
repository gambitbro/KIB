#include <iostream>
using namespace std;

int main(void)
{
    int *p;
    p = new int;
    if(!p){
        cout << "메모리를 할당할 수 없습니다." << endl;
        return -1;
    }

    *p = 5;         //할당받은 정수공간에 5 기록
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;       //할당받은 메모리 반환

    return 0;
}