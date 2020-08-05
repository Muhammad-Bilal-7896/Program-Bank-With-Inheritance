#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
using namespace std;
class Customer:protected Person
{
public:
	Customer();
	void AddCustomer(string, int);
	void PrintAllCustomersData();
	void DeleteCustomer(int);
	void Print_CustomerDetails(int);
	string getCustomerName(int);
};
Customer::Customer()
{
	cout << "\nThe customer class started\n";
}
void Customer::AddCustomer(string n, int id)
{
	Name.push_back(n);
	ID.push_back(id);
	cout << "\nThe customer " << n << "with Id: " << id << " was successfully added in the Bank.";
}
void Customer::PrintAllCustomersData()
{
	for (unsigned int i = 0; i < ID.size(); i++)
	{
		cout << "\nThe ID of " << (i + 1) << "Customer is : " << ID[i] << " and NAME is : " << Name[i];
	}
}
void Customer::DeleteCustomer(int index)
{
	Name.erase(Name.begin() + index);
	ID.erase(ID.begin() + index);
	cout << "\nThe customer with Name : " << Name[index] << " and ID: " << ID[index] << " was successfully deleted\n";
}
void Customer::Print_CustomerDetails(int index)
{
	cout << "The Customer Name is : " << Name[index] << endl;
	cout << "The Id of Customer is : " << ID[index] << endl;
}
string Customer::getCustomerName(int index)
{
	return (Name[index]);
}