#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Manager.h"

using namespace std;


class Supervisor : public Manager
{
public:
	Supervisor();
	void AddManager(Manager&m);
	void ifBonus();
	//void PrintAll()const;

private:
	vector<Manager> managers;
	
};