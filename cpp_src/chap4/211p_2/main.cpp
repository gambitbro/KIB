#include <iostream>
using namespace std;

int main(void)
{

    int *num = new int[5];
    if(!num){
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for(int i = 0; i < 5; ++i){
        cin >> num[i];
    }

    int sum = 0;
    for(int i = 0; i < 5; ++i){
        sum += num[i];
    }

    cout << "avg = " << sum/5 << endl;
    delete [] num;
    
    return 0;
}