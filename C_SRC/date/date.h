#ifndef DATE_H
#define DATE_H
/*
struct date {
	int year;
	int month;
	int day;
};
*/
typedef struct {
	int year;
	int month;
	int day;
} Date; // Date로 정의해 쓰겠다 -> struct를 빼고 쓸 수 있음

// typedef struct date Date; // struct date 를 Date로 정의

void printDate1(const Date d); // read only // void printDate1(const struct date d);
void printDate2(const Date *pd); // read only

#endif


/*
unsigned int length;

typedef unsigned int size_t;
size_t length;
*/
