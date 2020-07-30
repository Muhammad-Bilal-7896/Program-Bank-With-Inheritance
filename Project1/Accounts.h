#pragma once
#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Accounts
{
protected:
	vector<string> Name;
	vector<int> Account_ID;
	vector<string> AccountType;
	vector<int> Customer_ID;
	vector<int> Account_Balance;
public:
	Accounts();
	void WithDraw(int);
	void Deposit(int,string,int,int);//Also can be named as add Account
	void Balance();
	void DeleteAccount(int);
	int getAccountsNumber();
};
//Definning classes methods
Accounts::Accounts()
{
//no need to initialize vectors.They work perfect without initializing.C++ has done work for it
}
void Accounts::Deposit(int AID,string AT,int CID,int AB)
{
	Account_ID.push_back(AID);
    AccountType.push_back(AT);
	Customer_ID.push_back(CID);
	Account_Balance.push_back(AB);

}
void Accounts::WithDraw(int index)
{
	cout << "\nThe Account ID of " << (index + 1) << " person is equal to: "
		<< Account_ID[index] << endl;

	cout << "\nThe Account Type of " << (index + 1) << " person is equal to: "
		<< AccountType[index] << endl;

	cout << "\nThe Customer ID of " << (index + 1) << " person is equal to: "
		<<Customer_ID[index] << endl;

	cout << "\nThe Account Balance of " << (index + 1) << " person is equal to: "
		<< Account_Balance[index] << endl;

}
void Accounts::DeleteAccount(int index)
{
	Account_ID.erase(Account_ID.begin()+index);
	AccountType.erase(AccountType.begin()+index);
	Customer_ID.erase(Customer_ID.begin()+index);
	Account_Balance.erase(Account_Balance.begin()+index);
	//Displaying that the account is successfully removed from the bank
	cout << "\nThe Account ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Type of " << (index + 1) <<" was successfully removed from the bank";
	cout << "\nThe Customer ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Balance of " << (index + 1) << " was successfully removed from the bank";

}
//It will display all the balance in the bank
void Accounts::Balance()
{
	//The static int is not changed on the iteration where ever used in the loop or where ever
	static int sum = 0;//To store the sum of all balance
	for (unsigned int i = 0; i < Account_Balance.size(); i++)
	{
		sum = sum + Account_Balance[i];
	}
	cout << "The total balance in the bank is equal to : " << sum;
}
int Accounts::getAccountsNumber()
{
	return Account_ID.size();
}