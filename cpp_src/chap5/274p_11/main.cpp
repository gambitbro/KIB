#include <iostream>
#include <cstring>
using namespace std;

class Book{
    char *title;
    char *author;
    int price;
    int pages;
public:
    Book(const char *title, const char *author, int price, int pages);
    ~Book();
    Book(const Book &c);
    
    void set(const char *title, const char *author, int price, int pages);
    void show();
};

//------------------------------------------------------------------------

Book::Book(const char *title, const char *author, int price, int pages)
{
    this->price = price;
    this->pages = pages;
    int len = strlen(title);
    int len2 = strlen(author);
    this->title = new char [len+1];     //this->title에 공간이 없어서 동적할당
    this->author = new char [len2+1];
    strcpy(this->title, title);
    strcpy(this->author, author);
}

Book::~Book()
{
    if(title){
        delete [] this->title;
    }
    if(author){
        delete [] this->author;
    }
}

Book::Book(const Book &c)
{
    this->title = c.title;
    this->pages = c.pages;
    int len = strlen(c.title);
    int len2 = strlen(c.author);
    this->title = new char [len+1];
    this->author = new char [len2+1];
    strcpy(this->title, c.title);
    strcpy(this->author, c.author);
}

void Book::set(const char *title, const char *author, int price, int pages)
{
    if(title){
        delete [] this->title;
    }
    if(author){
        delete [] this->author;
    }
    int len = strlen(title);
    int len2 = strlen(author);
    this->title = new char [len+1];     //this->title에 공간이 없어서 동적할당
    this->author = new char [len2+1];
    strcpy(this->title, title);
    strcpy(this->author, author);
    
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