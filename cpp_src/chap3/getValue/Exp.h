#ifndef EXP_H
#define EXP_H

#include <iostream>
using namespace std;

class Exp{
private:
    //멤버 변수
    int base;
    int exp;
public:
    //생성자, 소멸자
    Exp();
    ~Exp();
    Exp(int b, int e);
    Exp(int r);
    //멤버 함수
    int getBase();
    int getExp();
    int getValue();
    bool equals(Exp unknown);
};

#endif