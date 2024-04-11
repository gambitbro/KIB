#include <iostream>
#include <string>
using namespace std;

//클래스 선언 
class Power;

//일반 함수 선언
Power sum(Power &a, Power &b);

class Power{
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0);
    
    void show();

    friend Power sum(Power &a, Power &b);

    Power sum(Power u);

    Power operator+(Power op2);
    Power operator-(Power op2);
    bool operator==(Power op2);
    Power operator+=(Power op2);
    bool operator!();
};

Power::Power(int kick, int punch)
{
    this->kick = kick;
    this->punch = punch;
}

void Power::show()
{
    cout << "kick = " << this->kick << ' ' << "punch = " << this->punch << endl;
}

Power sum(Power &a, Power &b)
{
    Power tmp;
    tmp.kick = a.kick + b.kick;
    tmp.punch = a.punch + b.punch;

    return tmp;
}

Power Power::sum(Power u)
{
    Power tmp;
    tmp.kick = this->kick + u.kick;
    tmp.punch = this->punch + u.punch;
    return tmp;
}

Power Power::operator+(Power op2)
{
    Power tmp;
    tmp.kick  = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power::operator-(Power op2)
{
    Power tmp;
    tmp.kick  = this->kick - op2.kick;
    tmp.punch = this->punch - op2.punch;
    return tmp;
}

bool Power::operator==(Power op2)
{
    if( (this->kick == op2.kick) && (this->punch == op2.punch) ){
        return true;
    }else{
        return false;
    }
}

Power Power::operator+=(Power op2)
{
    this->kick += op2.kick;
    this->punch += op2.punch;

    return *this;
}

bool Power::operator!()
{
    if(this->kick == 0 && this->punch == 0){
        return true;
    }else{
        return false;
    }
}

int main(void)
{
    Power a(3, 5);
    Power b(4, 6);
    Power c, d, e;
    //c = sum(a, b);
    //c = a.sum(b);
    c = a + b;
    d = b - a;
    e = a += b;

    a.show();
    b.show();
    c.show();
    d.show();
    e.show();

    if(a.operator==(b)){
        cout << "같아요!";
    }else{
        cout << "달라요!";
    }
    cout << endl;
    

    return 0;
}