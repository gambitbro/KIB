#include <iostream>
using namespace std;

class MyIntStack{
    int p[10];

public:
    int tos;
    MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack()
{
    for(int i=0; i<10; ++i){
        p[i] = 0;
    }
    tos = 0;
}

bool MyIntStack::push(int n)
{
    p[tos] = n;
    ++tos;

    if(tos > 10){
        tos = 9;
        return false;
    }else{
        return true;
    }
}

bool MyIntStack::pop(int &n)
{
    n = p[tos];
    --tos;
    if(tos < -1){
        tos = 0;
        return false;
    }else{
        p[tos+1] = 0;
        return true;
    }
}


int main(void)
{
    MyIntStack a;
    for(int i=0; i<11; ++i){
        if(a.push(i)){
            cout << i << ' ';
        }else{
            cout << endl << i+1 << " 번째 stack full" << endl;
        }
    }
    int n;
    for(int i=0; i<11; ++i){
        if(a.pop(n)){
            cout << n << ' ';
        }else{
            cout << endl << i+1 << " 번째 stack empty";
        }
    }
    cout << endl;
    cout << a.tos << endl;
    cout << endl;
    
    return 0;
}