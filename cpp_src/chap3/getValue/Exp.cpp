#include "Exp.h"
#include <cmath>


Exp::Exp()
{
    base = 1;
    exp = 1;
}

Exp::~Exp()
{
    //cout << "소멸" << endl;
}

Exp::Exp(int b, int e)
{
    base = b;
    exp = e;
}

Exp::Exp(int r)
{
    base = r;
    exp = 1;
}

int Exp::getBase()
{
    return base;
}

int Exp::getExp()
{
    return exp;
}

int Exp::getValue()
{
    int res;
    res = pow(base, exp);
    return res;
}

bool Exp::equals(Exp unknown)
{
    if( getValue() == unknown.getValue() ){
        return true;
    }else{
        return false;
    }
}