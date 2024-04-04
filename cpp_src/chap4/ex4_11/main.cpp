#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address);

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
    string title(text);

    //스트링출력
    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;

    return 0;
}