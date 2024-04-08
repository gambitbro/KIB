#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    string author;
    int price;
    int pages;
public:
    Book(const string title, const string author, int price, int pages);
    ~Book();
    Book(const Book &c);
    
    void set(const string title, const string author, int price, int pages);
    void show();
};

//------------------------------------------------------------------------

Book::Book(const string title, const string author, int price, int pages)
{
    this->price = price;
    this->pages = pages;
    this->title = title;
    this->author = author;
}

Book::~Book()
{
    //
}

Book::Book(const Book &c)
{
    this->title = c.title;
    this->pages = c.pages;

    this->title = c.title;
    this->author = c.author;
}

void Book::set(const string title, const string author, int price, int pages)
{
    this->title = title;
    this->author = author;
    
    this->price = price;
    this->pages = pages;
}
void Book::show()
{
    cout << title << ' ' << price << "원" << endl;
    cout << author << ' ' << pages << "페이지" << endl;
}

//-------------------------------------------------------------------------

int main(void)
{
    Book cpp("명품C++", "황기태", 10000, 696);
    Book java(cpp); // Book java = cpp;
    java.set("명품자바", "홍길동", 12000, 800);
    cpp.show();
    java.show();
    return 0;
}