#include <iostream>
#include <cstring>
using namespace std;

class Person{
    char *name;
    int id;
public:
    Person(int id, const char *name);
    ~Person();
    Person(const Person &c);    //복사 생성자 선언

    void changeName(const char *name);
    void show();
};

//----------------------------------------------------------------------
//복사 생성자 구현
Person::Person(const Person &c)
{
    this->id = c.id;
    this->name = c.name;
    int len = strlen(c.name);
    this->name = new char [len+1];
    strcpy(this->name, c.name);
}

Person::Person(int id, const char *name)
{
    this->id = id;
    int len = strlen(name);     //srtlen은 NULL문자를 포함하지 않음.
    this->name = new char [len+1];  //동적할당
    strcpy(this->name, name);
}
Person::~Person()
{
    if(name){
        delete [] this->name;
    }
}
void Person::changeName(const char *name)
{
    if(strlen(name) > strlen(this->name)){
        return;
    }
    strcpy(this->name, name);
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