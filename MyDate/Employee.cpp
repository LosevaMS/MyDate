#include "stdafx.h"
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;
Employee::Employee() :surname("Ivanov"), name("Ivan"), position("Janitor"), salary(20000), data1(1,4,2018), num(pers_num){ pers_num++; }

Employee::Employee(string s, string n, string p, int sal, Date date1, Date date2) : surname(s), name(n), position(p), salary(sal), data1(date1), data2(date2), fired(false), num(pers_num){
	pers_num++;
}

/*
Employee::Employee(string surn, string n, string p, int s, int d,int m,int y,int const n){
	setSurname(surn);
	setName(n);
	setPos(p);
	setSal(s);
	setDate(d, m, y);
	pers_num++;
	num(pers_num);
}*/
string Employee::getSurname() const
{
	return surname;
}
string Employee::getName() const
{
	return name;
}
string Employee::getPos() const
{
	return position;
}
int Employee::getSal() const
{
	return salary;
}
int Employee::getNum()const
{
	return num;
}

void Employee::setSurname(string surname)
{
	this->surname = surname;
}
void Employee::setName(string name)
{
	this->name = name;
}
void Employee::setPos(string position)
{
	this->position = position;
}
void Employee::setSal(int salary)
{
	this->salary = salary;
}
void Employee::Print()const
{
	cout << "surname: " << surname << endl;
	cout << "name: " << name << endl;
	cout << "position: " << position << endl;
	cout << "salary: " << salary << endl;
	cout << "personal number: " << num << endl;
	cout << "employment date: " << data1 << endl;
	cout << "date of dismissal: " << data2 << endl;
	if (fired == true) cout << " Fired. ";
}
bool Employee::ifFire(int d, int m, int y){
	cout << "Date of dismissal:";
	cout << d << '.'
		<< m << '.'
		<< y << endl;
	fired = true;
	return true;
}

int Employee::pers_num = 0;