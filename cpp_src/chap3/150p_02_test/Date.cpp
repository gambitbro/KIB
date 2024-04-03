#include "Date.h"

//split 함수 구현
vector<string> Date::split(string str, char Delimiter)
{
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

//생성자, 소멸자
Date::Date()
{
    year = 1990;
    month = 3;
    day = 20;
}

Date::~Date()
{
    // 객체 소멸
}

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
    
Date::Date(string str)
{
    vector<string> result = split(str, '/');
    year = stoi(result[0]);
    month = stoi(result[1]);
    day = stoi(result[2]);
}

//함수
void Date::show()
{
    cout << year << "년 " << month << "월 " << day << "일 " << endl;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}