#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"

using namespace std;

struct ManStaff{
	Employee &worker;
	string question;
	Date date1;
	Date date2;
	ManStaff( Employee& Ref, const string& Task, const Date& Deadline, const Date& Ready) : worker(Ref), question(Task), date1(Deadline), date2(Ready)
	{};
	
};

class Manager : public Employee
{
public:
	Manager(){};
	Manager(Employee &ref) :Employee(ref){};
	Manager(string s, string n, string p, int sal, Date date1, Date date2);
	vector<ManStaff> GetEmployee()const;
	vector<ManStaff> AddWorker(ManStaff &v);
	void PrintMan()const;
	//void Print()const{ Employee::Print(); };
	void Bonus();


private:
	vector<ManStaff> vec;
};