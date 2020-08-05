#pragma once
#include"Accounts.h"
class CurrentAccount:public Accounts 
{

public:
	CurrentAccount();
	~CurrentAccount();
	void WithDraw(int);
	void Deposit(int, string, int, int);//Also can be named as add Account
	void Balance();
	void DeleteAccount(int);
	int getAccountsNumber();
protected:
	vector<int> Account_ID_Current;
	vector<string> AccountType_Current;
	vector<int> Customer_ID_Current;
	vector<int> Account_Balance_Current;
};

CurrentAccount::CurrentAccount()
{
	cout << "\nCreate Account Class started";
}

CurrentAccount::~CurrentAccount()
{
	cout << "\nCreate Account Class ENDED";
}

void CurrentAccount::Deposit(int AID, string AT, int CID, int AB)
{
	Account_ID_Current.push_back(AID);
	AccountType_Current.push_back(AT);
	Customer_ID_Current.push_back(CID);
	Account_Balance_Current.push_back(AB);

}
void CurrentAccount::WithDraw(int index)
{
	cout << "\nThe Account ID of " << (index + 1) << " person is equal to: "
		<< Account_ID_Current[index] << endl;

	cout << "\nThe Account Type of " << (index + 1) << " person is equal to: "
		<< AccountType_Current[index] << endl;

	cout << "\nThe Customer ID of " << (index + 1) << " person is equal to: "
		<< Customer_ID_Current[index] << endl;

	cout << "\nThe Account Balance of " << (index + 1) << " person is equal to: "
		<< Account_Balance_Current[index] << endl;

}
void CurrentAccount::DeleteAccount(int index)
{
	Account_ID_Current.erase(Account_ID_Current.begin() + index);
	AccountType_Current.erase(AccountType_Current.begin() + index);
	Customer_ID_Current.erase(Customer_ID_Current.begin() + index);
	Account_Balance_Current.erase(Account_Balance_Current.begin() + index);
	//Displaying that the account is successfully removed from the bank
	cout << "\nThe Account ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Type of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Customer ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Balance of " << (index + 1) << " was successfully removed from the bank";

}
//It will display all the balance in the bank
void CurrentAccount::Balance()
{
	//The static int is not changed on the iteration where ever used in the loop or where ever
	static int sum = 0;//To store the sum of all balance
	for (int i = 0; i < Account_ID_Current.size(); i++)
	{
		sum = sum + Account_Balance_Current[i];
	}
	cout << "\nThe total balance in the bank in the current account is equal to : " << sum;
}
int CurrentAccount::getAccountsNumber()
{
	return Account_ID_Current.size();
}