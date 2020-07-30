#include"Accounts.h"
#include"Customer.h"
#include"Manager.h"
using namespace std;
class Bank
{
	Customer customers;
	Accounts accounts;
public:
	Bank();
	~Bank();
	void AddAccount(int,string,int,int);
	void DeleteAccount(int);
	void AddCustomer(string,int);
	void DeleteCustomer(int);
	int GetNoOfAccounts();
	string GetCustomer_Name(int);
	void driverProgram();
};
Bank::Bank()
{
	cout << "\nThe program is in the bank class\n";
}
void Bank::AddAccount(int AID, string AT, int CID, int AB)
{
	accounts.Deposit(AID, AT, CID, AB);
}
void Bank::DeleteAccount(int index)
{
	accounts.DeleteAccount(index);
}
void Bank::AddCustomer(string name, int ID)
{
	customers.AddCustomer(name, ID);
}
void Bank::DeleteCustomer(int index)
{
	customers.DeleteCustomer(index);
}
int Bank::GetNoOfAccounts()
{
	int num=accounts.getAccountsNumber();
	return num;
}
string Bank::GetCustomer_Name(int index)
{
	string name = customers.getCustomerName(index);
	return name;
}
void Bank::driverProgram()
{
    Manager m1;
    Accounts A1;    
    Bank b1;

    char options;

    cout << "\n\nEnter what you want to do \n1 for entering the managers data,\n2 for showing the managers data "
        << "\n3 for adding a customer in the bank\n4 for adding an account in the bank \n5 for deleting the customer\n"
        << "\n5 for deleting the account\n6 for getting customer name\n7 for getting No. of accounts"
        << "\n8 for seeing all the balance in the bank\nPress 'e' for exit";

    cin >> options;


    switch (options)
    {
    case '1':
    {
        string name;
        string branch;
        int id;
        //The manager class data
        cout << "\nEnter the Data of managers Class: \n";
        cout << "\nEnter the name of manager: \t";
        cin >> name;
        cout << "\nEnter the branch of manager: \t";
        cin >> branch;
        cout << "\nEnter the Id of manager: \t";
        cin >>  id;
        m1.TakeManagersData(name, branch, id);
        break;
    }
    case '2':
    {
        cout << "\nThe data of Manager is : ";
        m1.Print_ManagerDetails();
        break;
    }
    case '3':
    {
        string Cname;
        int CID;
        cout << "\nEnter the name of customer: ";
        cin >> Cname;
        cout << "\nEnter the Customer ID: ";
        cin >> CID;
        b1.AddCustomer(Cname, CID);

        break;
    }
    case '4':
    {
        int AID;
        int CID;
        int AB;
        string AT;
        cout << "\nEnter the name of Account ID: ";
        cin >> AID;
        cout << "\nEnter the name of Customer ID: ";
        cin >> CID;
        cout << "\nEnter the name of Account BALANCE: ";
        cin >> AB;
        cout << "\nEnter the name of Account Type: ";
        cin >> AT;
        b1.AddAccount(AID, AT, CID, AB);

        break;
    }
    case '5':
    {
        int index;
        cout << "\nEnter the customer which you want to delete: ";
        cin >> index;
        b1.DeleteCustomer(index);

        break;
    }
    case '6':
    {
        int index;
        cout << "\nEnter the account which you want to delete: ";
        cin >> index;
        b1.DeleteAccount(index);

        break;
    }
    case '7':
    {
        int cn;
        cout << "\nEnter the customer ID which you want to get name: ";
        cin >> cn;
        b1.GetCustomer_Name(cn);

        break;
    }
    case '8':
    {
        b1.GetNoOfAccounts();

        break;
    }
    case '9':
    {
        A1.Balance();
        break;
    }
    case 'e':
    {
        cout << "The program is ending now: ";

        break;
    }
    default:
    {
        cout << "\n\nEnter right value please: \n";
    }

    }
}

Bank::~Bank()
{
	cout << "\nThe Bank class ended \n";
}