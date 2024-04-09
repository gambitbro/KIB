#include <iostream>
#include <string>
using namespace std;

class Person{
    int id;
    double weight;
    string name;
public:
    //생성자
    Person(int a=1, string b="grace", double c=20.5);
    void show();
};

Person::Person(int a, string b, double c)
{
    this->id = a;
    this->weight = c;
    this->name = b;
}

void Person::show()
{
    cout << id << ' ' <<  weight << ' ' << name << endl;
}

int main(void)
{
    Person grace, ashley(2, "ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
    return 0;
}