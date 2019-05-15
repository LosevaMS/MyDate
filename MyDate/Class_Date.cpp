// MyDate.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
//#include"Manager.h"
#include "Supervisor.h"
using namespace std;

int main()
{ /*
	Date d1(25, 3, 2001);
	cout << " d1: " << d1 << endl;
	Date d2;
	cin >> d2;
	cout << " d2: " << d2 << endl;

	if (d1 > d2) cout << d1 << " > " << d2 << endl;
	if (d1 < d2) cout << d1 << " < " << d2 << endl;
	if (d1 == d2) cout << d1 << " == " << d2 << endl;
	if (d1 != d2) cout << d1 << " != " << d2 << endl;
	cout << " d1 - d2 = ";
	d1 - d2; 
	int x = 524;
	cout << endl <<d1<< " + "<<x<<" = ";
	d1 + x;
	int z = 35548;
	cout << endl << d2 << " - " << z << " = ";
	d2 - z;
	*/
	Date date1a(29, 10, 2018);
	Date date2a(9, 1, 2025);
	Employee a("Pitt", "Brad", "Actor", 20000, date1a, date2a);
	ManStaff a1 = { a, "to get the Oscar", Date(1, 11, 2018), Date(31, 10, 2018) };
	Date date1m(4, 5, 2017);
	Date date2m(29, 10, 2019);
	Employee m("Loseva", "Maria", "Secretary", 20000, date1m, date2m);
	ManStaff m1 = { m, "to write a report", Date(1, 11, 2018), Date(31, 10, 2018) };
	Date date1n(15, 10, 2016);
	Date date2n(29, 10, 2019);
	Manager manager1("Gladkova", "Anastasia", "Manager", 45000, date1n, date2n);
	manager1.AddWorker(a1);
	manager1.AddWorker(m1);
	 manager1.PrintMan();
	 manager1.Bonus();

	 Date date1b(9, 5, 2017);
	 Date date2b(29, 10, 2029);
	 Employee b("Brown", "Bob", "Salesman", 25000, date1b, date2b);
	 ManStaff b1 = { b, "make a list of regular customers", Date(1, 11, 2017), Date(2, 11, 2017) };
	 Date date1p(15, 1, 2018);
	 Date date2p(9, 10, 2019);
	 Manager manager2("Ponomorenko", "Alex", "Manager", 40000, date1p, date2p);
	 manager2.AddWorker(b1);
	
	 Date date1c(4, 6, 2000);
	 Date date2c(9, 10, 2019);
	 Employee c("Black", "Sirius", "Collector", 100000, date1c, date2c);
	 ManStaff c1 = { c, "to knock out a debt", Date(12, 5, 2001), Date(2, 5, 2001) };
	 manager2.AddWorker(c1);
	
	 Date date1d(14, 6, 1938);
	 Date date2d(9, 10, 1961);
	 Employee d("Cash", "Johnny", "Singer", 100000, date1d, date2d);
	 ManStaff d1 = { d, "to tour Europe", Date(14, 9, 1956), Date(14, 9, 1956) };
	 manager2.AddWorker(d1);
	 manager2.PrintMan();
	 manager2.Bonus();
	 cout << endl;
	 Supervisor sup;
	 sup.AddManager(manager1);
	 sup.AddManager(manager2);
	//sup.PrintAll();
	sup.ifBonus();

	cout << endl; system("pause");

}