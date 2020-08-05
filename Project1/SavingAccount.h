#pragma once
#include"Accounts.h"
class SavingAccount :public Accounts
{

public:
	SavingAccount();
	~SavingAccount();
	void WithDraw(int);
	void Deposit(int, string, int, int);//Also can be named as add Account
	void Balance();
	void DeleteAccount(int);
	int getAccountsNumber();
protected:
	vector<int> Account_ID_Saving;
	vector<string> AccountType_Saving;
	vector<int> Customer_ID_Saving;
	vector<int> Account_Balance_Saving;
};

SavingAccount::SavingAccount()
{
	cout << "\nSaving Account Class started";
}

SavingAccount::~SavingAccount()
{
	cout << "\nSaving Account Class ENDED";
}

void SavingAccount::Deposit(int AID, string AT, int CID, int AB)
{
	Account_ID_Saving.push_back(AID);
	AccountType_Saving.push_back(AT);
	Customer_ID_Saving.push_back(CID);
	Account_Balance_Saving.push_back(AB);
}
void SavingAccount::WithDraw(int index)
{
	cout << "\nThe Account ID of " << (index + 1) << " person is equal to: "
		<< Account_ID_Saving[index] << endl;

	cout << "\nThe Account Type of " << (index + 1) << " person is equal to: "
		<< AccountType_Saving[index] << endl;

	cout << "\nThe Customer ID of " << (index + 1) << " person is equal to: "
		<< Customer_ID_Saving[index] << endl;

	cout << "\nThe Account Balance of " << (index + 1) << " person is equal to: "
		<< Account_Balance_Saving[index] << endl;

}
void SavingAccount::DeleteAccount(int index)
{
	Account_ID_Saving.erase(Account_ID_Saving.begin() + index);
	AccountType_Saving.erase(AccountType_Saving.begin() + index);
	Customer_ID_Saving.erase(Customer_ID_Saving.begin() + index);
	Account_Balance_Saving.erase(Account_Balance_Saving.begin() + index);
	//Displaying that the account is successfully removed from the bank
	cout << "\nThe Account ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Type of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Customer ID of " << (index + 1) << " was successfully removed from the bank";
	cout << "\nThe Account Balance of " << (index + 1) << " was successfully removed from the bank";

}
//It will display all the balance in the bank
void SavingAccount::Balance()
{
	//The static int is not changed on the iteration where ever used in the loop or where ever
	static int sum = 0;//To store the sum of all balance
	for (int i = 0; i < Account_ID_Saving.size(); i++)
	{
		sum = sum + Account_Balance_Saving[i];
	}
	cout << "\nThe total balance in the bank is equal to : " << sum;
}
int SavingAccount::getAccountsNumber()
{
	return Account_ID_Saving.size();
}