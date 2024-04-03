#include "a.h"

int main(void)
{  
    //문자열 song
    string song("Falling in love with you");
    //문자열 elvis
    string elvis("Elvis Presley");      //문자열 elvis
    string singer;

    cout << song + "을 부른 가수는?" << endl;
    cout << "(힌트 : 첫 글자는 " << elvis[0] << ") ?";

    //문자열 입력받기
    getline(cin, singer);

    if(singer == elvis){
        cout << "맞았습니다!" << endl;
    }else{
        cout << "틀렸습니다! " << elvis + "입니다." << endl;
    }

    cout << "입력한 문자의 길이는 " +  singer.length() << endl;

    return 0;
}