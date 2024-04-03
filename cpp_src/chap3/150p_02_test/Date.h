#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <sstream>


class Date{
private:
    vector<string> split(string str, char Delimiter);

public:
    //멤버 변수
    int year;
    int month;
    int day;

    //생성자, 소멸자
    Date();
    ~Date();
    Date(int y, int m, int d);
    Date(string str);

    //멤버 함수
    void show();
    int getYear();
    int getMonth();
    int getDay();
};


#endif