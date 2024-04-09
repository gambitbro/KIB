#include <iostream>
using namespace std;
//선언
int add(int *pa, int c);
int add(int *pa, int c, int *pb);
//구현
int add(int *pa, int c)
{
    int sum = 0;
    for(int i=0; i<c; ++i){
        sum += *(pa+i);
    }

    return sum;
}
int add(int *pa, int c, int *pb)
{
    int sum = 0;
    for(int i=0; i<c; ++i){
        sum += ( *(pa+i) + *(pb+i) ); 
    }

    return sum;
}

//int add(int (&a)[], int c)
//{}

//----------------------------------------------------------------

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c << endl;
    cout << d << endl;

    return 0;
}