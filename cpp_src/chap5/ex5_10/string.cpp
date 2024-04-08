#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    int id;
public:
    Person(int id, const string name);
    ~Person();
    Person(const Person &c);    //복사 생성자 선언

    void changeName(const string name);
    void show();
};

//----------------------------------------------------------------------
//복사 생성자 구현
Person::Person(const Person &c)
{
    this->id = c.id;
    this->name = c.name;
}

Person::Person(int id, const string name)
{
    this->id = id;
    this->name = name;
}
Person::~Person()
{
  //소멸자
}
void Person::changeName(const string name)
{
    this->name = name;
}
void Person::show()
{
    cout << id << ", " << name << endl;
}

//------------------------------------------------------------------------------

int main(void)
{
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}