#include <iostream>
#include <string>
using namespace std;

class Book;

//일반 함수 선언
void operator+=(Book &u, int r);
void operator-=(Book &u, int r);

class Book{
    string title;
    int price;
    int pages;
public:
    Book(string title="", int price=0, int pages=0);
    void show();
    string getTitle();

    Book operator+=(int u);
    Book operator-=(int u);
    friend void operator+=(Book &u, int r);
    friend void operator-=(Book &u, int r);

    bool operator==(int price);
    bool operator==(string title);
    bool operator==(Book op);
};

Book::Book(string title, int price, int pages)
{
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show()
{
    cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

string Book::getTitle()
{
    return this->title;
}

Book Book::operator+=(int u)
{
    this->price += u;
    return *this;
}

Book Book::operator-=(int u)
{
    this->price -= u;
    return *this;
}

void operator+=(Book &u, int r)
{
    u.price += r;
}

void operator-=(Book &u, int r)
{
    u.price -= r;
}

bool Book::operator==(int price)
{
    if(this->price == price){
        return true;
    }else{
        return false;
    }
}
bool Book::operator==(string title)
{
    if(this->title == title){
        return true;
    }else{
        return false;
    }
}
bool Book::operator==(Book op)
{
    if( (this->price == op.price) && (this->title == op.title) && (this->pages == op.pages) ){
        return true;
    }else{
        return false;
    }
}

int main(void)
{
    //Book a("청춘", 20000, 300);
    //Book b("미래", 30000, 500);
    //a += 500;
    //b -= 500;
    // operator+=(a, 500);
    // operator-=(b, 500);
    // a.show(); 
    // b.show();

    Book a("명품 C++", 30000, 500);
    Book b("고품 C++", 30000, 500);

    if(a == 30000){
        cout << "정가 30000원" << endl;
    }
    if(a == "명품 C++"){
        cout << "명품 C++입니다." << endl;
    }
    if(a == b){
        cout << "두 책이 같은 책입니다." << endl;
    }

    return 0;
}
