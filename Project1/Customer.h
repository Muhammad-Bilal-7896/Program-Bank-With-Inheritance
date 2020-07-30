#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Customer:protected Accounts
{
public:
	Customer();
	void AddCustomer(string,int);
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
	Account_ID.push_back(id);
	cout << "\nThe customer " << n << "with Id: " << id << " was successfully added in the Bank.";
}
void Customer::PrintAllCustomersData()
{
	for (unsigned int i = 0; i < Account_ID.size(); i++)
	{
		cout << "\nThe ID of " << (i + 1) << "Customer is : " << Account_ID[i] << " and NAME is : " << Name[i];
	}
}
void Customer::DeleteCustomer(int index)
{
	Name.erase(Name.begin() + index);
	Account_ID.erase(Account_ID.begin() + index);
	cout << "\nThe customer with Name : " << Name[index] << " and ID: " << Account_ID[index] << " was successfully deleted\n";
}
void Customer::Print_CustomerDetails(int index)
{
	cout << "The Customer Name is : " << Name[index] << endl;
	cout << "The Id of Customer is : " << Account_ID[index] << endl;
}
string Customer::getCustomerName(int index)
{
	return (Name[index]);
}