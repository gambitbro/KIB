#include <iostream>
#include <string>
using namespace std;
//call by reference
void combine(string &text1, string &text2, string &text3)
{
    text3 = text1 + " " + text2;
}
// call by address
void combine(string text1, string text2, string *p)
{
    *p = text1 + " " + text2;
}


int main(void)
{
    string text1("I love you"), text2("very much");
    string text3;   //비어있는 문자열
    //string *p = &text3;
    
    combine(text1, text2, text3);
    cout << text3 << endl;
    combine(text1, text2, &text3);
    cout << text3 << endl;

    return 0;
}