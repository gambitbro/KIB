#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << "문자열 입력>> ";
    string strInput;
    //cin >> strInput;      공백이 생기면 그 이후는 입력되지 않음
    getline(cin, strInput, '\n');   //getline 함수를 써서 엔터 입력까지 입력
    
    int cnt;        // 찾는 문자의 개수를 저장할 변수
    
    //문자열에서 a 찾기--------------------------------------------------------
    
    // 1. 일반적인 방법
    
    // for(int i = 0; i < strInput.length(); ++i){
    //     if(strInput[i] == 'a'){
    //         cnt += 1;
    //     }
    // }

    // 2. string의 find 함수를 이용하는 방법
    int pos = 0;
    while(1){
        pos = strInput.find('a', pos);
        
        if(pos != -1){
            cnt++;
            pos++;
        }else{
            break;
        }
    }

    cout << "문자 a는" << cnt << "개 있습니다." << endl;
    
    return 0;
}

//Are you happy? I am so happy.