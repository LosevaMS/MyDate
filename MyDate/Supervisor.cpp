#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Supervisor.h"

using namespace std;


Supervisor::Supervisor(){
}

void Supervisor::AddManager(Manager &m){
	managers.push_back(m);
}

void Supervisor::ifBonus(){
	int count;
	int size;
	for (int i = 0; i < managers.size(); i++){
		count = 0;
		size = managers[i].GetEmployee().size();
		for (int j = 0; j < size; j++){
			if (managers[i].GetEmployee()[j].date1 < managers[i].GetEmployee()[j].date2){
				count = count;
				//cout << managers[i].GetEmployee()[j].worker.getName() << " " << managers[i].GetEmployee()[j].worker.getSurname() << " has not the bonus"<<endl;
			}
			else{
				count++;
				//cout << managers[i].GetEmployee()[j].worker.getName() << " " << managers[i].GetEmployee()[j].worker.getSurname() << " has the bonus" << endl;
			}
		}
		if (count == size){
			cout << managers[i].Employee::getName() << " " << managers[i].Employee::getSurname();
			cout<< " has the manager's bonus" << endl;
		}
		else{
			cout << managers[i].Employee::getName() << " " << managers[i].Employee::getSurname();
			cout << " has not the manager's bonus" << endl;
		}
	}
}