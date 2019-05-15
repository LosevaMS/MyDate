#include "stdafx.h"
#include <iostream>
#include <string>

class Date
{
public:
	//Date();
	Date(int d=0, int m=0, int y=0);
	~Date();
	Date(const Date &date);
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	void setDate(int day, int month, int year);

	void print() const;
	void operator-(const Date &date);
	void operator+(int x); void operator-(int x);
	bool operator>(const Date &date);
	bool operator<(const Date &date);
	bool operator==(const Date &date);
	bool operator!=(const Date &date);
    bool isValidDate(int day, int month, int year);
	bool isLeapYear(int year);
	int dayInMonth(int month, int year);
	friend std::ostream& operator<< (std::ostream &out, const Date &date);
	friend std::istream& operator>> (std::istream &in, Date &date);
	//Date operator<<(const Date &s);
private:
	int day;
	int month;
	int year;
};