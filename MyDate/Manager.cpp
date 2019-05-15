
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Manager.h"

using namespace std;

Manager::Manager(string s, string n, string p, int sal, Date date1, Date date2) : Employee(s, n, p, sal, date1, date2){};

vector<ManStaff> Manager::AddWorker(ManStaff &v){
	vec.push_back(v);
	return vec;
}
vector<ManStaff> Manager::GetEmployee()const{
	return vec;
}
void Manager::PrintMan()const{
	cout << "Manager: ";
	Employee::Print();
	cout << "Employees: " << endl;
	for (int i = 0; i < vec.size(); i++){
		vec[i].worker.Print();
		cout << vec[i].question << endl;
		vec[i].date1.print();
		vec[i].date2.print();
	}
}
void Manager::Bonus(){
	for (int i = 0; i<vec.size(); i++){
		if (vec[i].date1<vec[i].date2)
			cout << vec[i].worker.getName()<<' ' << vec[i].worker.getSurname()<<" has not the bonus"<<endl;
		else cout << vec[i].worker.getName() << ' ' << vec[i].worker.getSurname()<<" has the bonus"<<endl;
	}
}

