#pragma once
#include<iostream>
#include"Bank.h"
#include"Customer.h"
#include"Manager.h"
#include"Accounts.h"

#include<vector>
#include<string>
using namespace std;

int main()
{
    Manager m1;
    Accounts A1;
    Bank b1;


	bool check = true;
	while(check==true)
	{ 

	/// <summary>
	/// 
        
        char options;

        cout << "\n\nEnter what you want to do \n1 for entering the managers data,\n2 for showing the managers data "
            << "\n3 for adding a customer in the bank\n4 for adding an account in the bank \n5 for deleting the customer\n"
            << "\n5 for deleting the account\n6 for getting customer name\n7 for getting No. of accounts"
            << "\n8 for seeing all the balance in the bank\nPress 'e' for exit\n\n";

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
            cin >> id;
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
	/// </summary>
	/// <returns></returns>

	char option;

	cout << "Enter y for opening menu again and n for exiting\t";
	cin >> option;
	while (option != 'y' && option != 'n')
	{
		cout << "Enter right value Please! only y or n: ";
		char option1;
		cin >> option1;
		if (option1 == 'y' || option1 == 'n')
		{
			break;
		}
	}
	if (option == 'y')
	{
		check = true;
	}
	else if (option == 'n')
	{
		check = false;
		cout << "The program is ending now! ";
	}
	}
}