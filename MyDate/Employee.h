#include "stdafx.h"
#include <iostream>
#include <string>
#include "MyDate.h"

using namespace std;

class Employee //: public Date
{
public:
	Employee();
	Employee(string s, string n, string p, int sal,Date date1, Date date2);
	//Employee(string surname, string name, string position, int salary, int d, int m, int y,const int n);
	string getSurname()const;
	void setSurname(string surn);
	string getName()const;
	void setName(string n);
	string getPos()const;
	void setPos(string pos);
	int getSal()const;
	void setSal(int sal);
	int getNum()const;
	void setNum(const int num);
	void Print()const;
	bool ifFire(int d, int m, int y);


private:
	string surname;
	string name;
	string position;
	Date data1;
	Date data2;
	int salary;
	static int pers_num;
	const int num;
	bool fired;
};
