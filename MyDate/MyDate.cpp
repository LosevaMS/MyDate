#include "stdafx.h"
#include <iostream>
#include <string>
#include "MyDate.h"

using namespace std;


Date::Date(int d, int m, int y )
{
	setDate(d, m, y);
	
}

Date::Date(const Date &date)
{
	setDate(date.day, date.month, date.year);

}

Date::~Date()
{
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::setDate(int day, int month, int year)
{
	if (isValidDate(day, month, year))
	{
		setDay(day);
		setMonth(month);
		setYear(year);
	}
	else {
		throw std::string("Not valid date");
	}
}

void Date::print() const
{
	cout << day << '.'
		<< month << '.'
		<< year << endl;
}
std::ostream& operator<< (std::ostream &out, const Date &date)
{
	out << date.day << '.'
		<< date.month << '.'
		<< date.year <<" ";

	return out;
}
std::istream& operator>> (std::istream &in, Date &date)
{
	in >> date.day >> date.month >> date.year;
	return in;
}
bool
Date::operator>(const Date &date)
{
	if (year > date.year) return true;
	if (year < date.year) return false;
	if ((year == date.year) && (month > date.month)) return true;
	if ((year == date.year) && (month < date.month)) return false;
	if ((year == date.year) && (month == date.month) && (day>date.day)) return true;
	if ((year == date.year) && (month == date.month) && (day<=date.day)) return false;
}
bool 
Date::operator<(const Date &date)
{
	if (year < date.year) return true;
	if (year > date.year) return false;
	if ((year == date.year) && (month < date.month)) return true;
	if ((year == date.year) && (month > date.month)) return false;
	if ((year == date.year) && (month == date.month) && (day<date.day)) return true;
	if ((year == date.year) && (month == date.month) && (day >= date.day)) return false;
}
bool
Date::operator==(const Date &date)
{
	
	if ((year == date.year) && (month == date.month) && (day == date.day)) return true;
	else return false;
}
void
Date::operator+(int x){
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int d = 0, m = 0, y = 0;
	long int per1 = 0;
	for (long int i = 0; i < year; i++){
		if (isLeapYear(year) == true)
			per1 = per1 + 366;
		else per1 = per1 + 365;
	}
	per1 = per1 + day;
	for (long int i = 0; i < month; i++){
		per1 = per1 + days[i];
	}
	
	long int res = 0;
	 res = per1 + x;
	y = res / 365;
	res %= 365;
	m = res / 30;
	d = res % 30;
	cout << d << '.'
		<< m << '.'
		<< y << endl;
}
void
Date::operator-(int x){
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int d = 0, m = 0, y = 0;
	long int per1 = 0;
	for (long int i = 0; i < year; i++){
		if (isLeapYear(year) == true)
			per1 = per1 + 366;
		else per1 = per1 + 365;
	}
	per1 = per1 + day;
	for (long int i = 0; i < month; i++){
		per1 = per1 + days[i];
	}

	long int res = 0;
	res = per1 - x;
	y = res / 365;
	res %= 365;
	m = res / 30;
	d = res % 30;
	cout << d << '.'
		<< m << '.'
		<< y << endl;
}
void
Date::operator-(const Date &date)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int d = 0, m = 0, y = 0;
	int per1 = 0;
	for (int i = 0; i < year; i++){
		if (isLeapYear(year) == true)
			per1 = per1+366;
		else per1 =per1+ 365;
	}
	per1 = per1 + day;
	for (int i = 0; i < month; i++){
		per1 = per1 +days[i];
	}
	int per2 = 0;
	for (int i = 0; i < date.year; i++){
		if (isLeapYear(date.year) == true)
			per2 = per2 + 366;
		else per2 = per2 + 365;
	}
	per2 = per2 + date.day;
	for (int i = 0; i < date.month; i++){
		per2 = per2 + days[i];
	}
	int res=0;
	if (per1 >= per2) res=per1 - per2;
	else  res=per2 - per1;
	y = res / 365;
	res %= 365;
	m = res / 30;
	d = res % 30;
	cout << d << '.'
		<< m << '.'
		<< y << endl;
}
bool
Date::operator!=(const Date &date)
{

	if ((year == date.year) && (month == date.month) && (day == date.day)) return false;
	else return true;
}

bool Date::isValidDate(int day, int month, int year)
{
	if (day > dayInMonth(month, year))
	{
		cout << "Not valid date" << endl;
	}
	return true;
}

bool Date::isLeapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400==0)
		return true;
	else return false;

}

int Date::dayInMonth(int month, int year)
{
	if (month == 0 && year == 0) return 0;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeapYear(year)==true) days[1] = 29;
	return days[month - 1];
}