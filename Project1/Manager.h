#pragma once
#include"Person.h"
class Manager:protected Person
{

public:
	void Print_ManagerDetails();
	void TakeManagersData(string, string, int);
};
void Manager::Print_ManagerDetails()
{
	cout << "\nName.size: " << Name.size();
	cout << "\nID.size: " << ID.size();
	cout << "\nBranch.size: " << Branch.size();
	for (int i = 0; i < Name.size(); i++)
	{
		cout << "\nThe ID of Manager is : " << ID[i] << endl;
		cout << "\nThe Name of Manager is : " << Name[i] << endl;
		cout << "\nThe Branch of Manager is : " << Branch[i] << endl;
	}
}
void Manager::TakeManagersData(string n, string b, int id)
{
	Name.push_back(n);
	Branch.push_back(b);
	ID.push_back(id);
}