#include <iostream>
#include <string>
using namespace std;

class SortedArray{
    int size;
    int *p;
    //void sort();
public:
    SortedArray();
    ~SortedArray();
    SortedArray(SortedArray &src);  //복사생성자
    SortedArray(int p[], int size);
    
    SortedArray operator+(SortedArray &op2);    //현재 배열에 op2추가
    SortedArray& operator=(const SortedArray &op2);
    void show();
};

SortedArray::SortedArray()
{
    this->size = 1;
    this->p = new int [size];

}
SortedArray::~SortedArray()
{
    if(this->p){
        delete [] this->p;
    }
}
SortedArray::SortedArray(SortedArray &src)
{
    this->size = size;
    this->p = new int [size];
    for(int i=0; i< size; ++i){
        this->p[i] = p[i];
    }
}
SortedArray::SortedArray(int p[], int size)
{
    this->size = size;
    this->p = new int [size];
    for(int i=0; i< size; ++i){
        this->p[i] = p[i];
    }
}

SortedArray SortedArray::operator+(SortedArray &op2)
{
    SortedArray tmp;

    tmp.size = this->size + op2.size;
    tmp.p = new int [tmp.size];

    for(int i =0; i<tmp.size; ++i){
        if(i < this->size){
            tmp.p[i] = this->p[i];
        }else{
            tmp.p[i] = op2.p[i-(this->size)];
        }
    }
    return tmp;
}
SortedArray& SortedArray::operator=(const SortedArray &op2)
{
    this->size += op2.size;
    this->p = new int [size];
    for(int i=0; i<this->size; ++i){
        this->p[i] = op2.p[i];
    }
    return *this;
}

void SortedArray::show()
{
    for(int i=0; i<size; ++i){
        cout << this->p[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    // a.show();
    // b.show();
    // c.show();

    a.show();
    b.show();
    c.show();
    
    return 0;
}