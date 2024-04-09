//형 변환으로 인해 함수 중복이 모호한 경우


#include <iostream>
using namespace std;

// float square(float a)
// {
//     return a*a;
// }

double square(double a)
{
    return a*a;
}

int main(void)
{
    cout << square(3.0) << endl;
    cout << square(3) << endl; 
    return 0;
}

