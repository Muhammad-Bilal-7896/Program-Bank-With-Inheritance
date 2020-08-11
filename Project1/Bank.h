#include"Accounts.h"
#include"CurrentAccount.h"
#include"SavingAccount.h"
#include"Customer.h"
#include"Manager.h"
using namespace std;
class Bank
{
    Customer customers;
    //For Polymorphism and using virtual functions pointers or refrences one is necessary to use otherwise
//we cannot use virtual functions and polymorphism
    Accounts* accountsC;
    Accounts* accountsS;
public:
    Bank();
    ~Bank();
    //Methods for current accounts
    void Add_Current_Account(int, string, int, int);
    int Get_Current_NoOfAccounts();
    void Delete_Current_Account(int);
    void getAll_current_Balance();
    //Methods for current accounts


    //Methods for saving accounts
    void Add_Saving_Account(int, string, int, int);
    int Get_Saving_NoOfAccounts();
    void Delete_Saving_Account(int);
    void getAll_saving_Balance();
    //Methods for saving accounts



    void AddCustomer(string, int);
    void DeleteCustomer(int);

    string GetCustomer_Name(int);
   // void driverProgram();
};
Bank::Bank()
{
    accountsC = new CurrentAccount();
    accountsS = new SavingAccount();
    cout << "\nThe program is in the bank class\n";
}

//Current Account
void Bank::Add_Current_Account(int AID, string AT, int CID, int AB)
{
    accountsC->Deposit(AID, AT, CID, AB);
}
void Bank::Delete_Current_Account(int index)
{
    accountsC->DeleteAccount(index);
}
int Bank::Get_Current_NoOfAccounts()
{
    int num = accountsC->getAccountsNumber();
    return num;
}
void Bank::getAll_current_Balance()
{
    accountsC->Balance();
}
//Current Account

//Saving Account
void Bank::getAll_saving_Balance()
{
    accountsS->Balance();
}
void Bank::Add_Saving_Account(int AID, string AT, int CID, int AB)
{
    accountsS->Deposit(AID, AT, CID, AB);
}
void Bank::Delete_Saving_Account(int index)
{
    accountsS->DeleteAccount(index);
}
int Bank::Get_Saving_NoOfAccounts()
{
    int num = accountsS->getAccountsNumber();
    return num;
}
//Saving Account


void Bank::AddCustomer(string name, int ID)
{
    customers.AddCustomer(name, ID);
}
void Bank::DeleteCustomer(int index)
{
    customers.DeleteCustomer(index);
}

string Bank::GetCustomer_Name(int index)
{
    string name = customers.getCustomerName(index);
    return name;
}
//void Bank::driverProgram()
//{
//    Manager m1;
//
//
//    Bank b1;
//
//    char options;
//
//    cout << "\n\nEnter what you want to do \n1 for entering the managers data,\n2 for showing the managers data "
//        << "\n3 for adding a customer in the bank\n4 for adding an Account in the bank \n5 for deleting the customer\n"
//        << "\n6 for deleting the Account\n7 for getting customer name\n8 for getting the No. of Accounts"
//        << "\n9 for seeing all the balance in the bank\nPress 'e' for exit";
//
//    cin >> options;
//
//
//    switch (options)
//    {
//    case '1':
//    {
//        string name;
//        string branch;
//        int id;
//        //The manager class data
//        cout << "\nEnter the Data of managers Class: \n";
//        cout << "\nEnter the name of manager: \t";
//        cin >> name;
//        cout << "\nEnter the branch of manager: \t";
//        cin >> branch;
//        cout << "\nEnter the Id of manager: \t";
//        cin >> id;
//        m1.TakeManagersData(name, branch, id);
//        break;
//    }
//    case '2':
//    {
//        cout << "\nThe data of Manager is : ";
//        m1.Print_ManagerDetails();
//        break;
//    }
//    case '3':
//    {
//        string Cname;
//        int CID;
//        cout << "\nEnter the name of customer: ";
//        cin >> Cname;
//        cout << "\nEnter the Customer ID: ";
//        cin >> CID;
//        b1.AddCustomer(Cname, CID);
//
//        break;
//    }
//    case '4':
//    {
//        char optionB;
//        cout << "There are two options available for creating account.\nOne is saving account(INTEREST)\t"
//            << "Press '1' for it and \nSecond one is Current Account(NO INTEREST)\tPress '2' for it\n";
//        cin >> optionB;
//        int AID;
//        int CID;
//        int AB;
//        string AT;
//
//        switch (optionB)
//        {
//        case '1':
//        {
//            cout << "\nEnter the Account ID: ";
//            cin >> AID;
//            cout << "\nEnter the Customer ID: ";
//            cin >> CID;
//            cout << "\nEnter the Account BALANCE: ";
//            cin >> AB;
//            cout << "\nEnter the Account Type: ";
//            cin >> AT;
//
//            b1.Add_Saving_Account(AID, AT, CID, AB);
//            cout << "\nSuccessfully created a Saving account\tBut delete it as soon as possible\n";
//            break;
//        }
//        case'2':
//        {
//            cout << "\nEnter the Account ID: ";
//            cin >> AID;
//            cout << "\nEnter the Customer ID: ";
//            cin >> CID;
//            cout << "\nEnter the Account BALANCE: ";
//            cin >> AB;
//            cout << "\nEnter the Account Type: ";
//            cin >> AT;
//
//            b1.Add_Current_Account(AID, AT, CID, AB);
//            cout << "\nSuccessfully created a Current account\nKeep It as long as you want\n";
//            break;
//        }
//        default:
//            cout << "\nSorry Try Again!\nEnter right value only one or two\n";
//            break;
//        }
//
//
//        break;
//    }
//    case '5':
//    {
//        int index;
//        cout << "\nEnter the customer which you want to delete: ";
//        cin >> index;
//        b1.DeleteCustomer(index);
//
//        break;
//    }
//    case '6':
//    {
//        char optionB;
//        cout << "There are two options available for DELETING account.\nOne is saving account(INTEREST)\t"
//            << "Press '1' for it and \nSecond one is Current Account(NO INTEREST)\tPress '2' for it\n";
//        cin >> optionB;
//
//        int index;
//
//        switch (optionB)
//        {
//        case '1':
//        {
//            cout << "\nEnter the account number you want to delete\n";
//            cin >> index;
//
//            b1.Delete_Saving_Account(index);
//            cout << "\nSuccessfully deleted Saving account at the given address\n";
//            break;
//        }
//        case'2':
//        {
//            cout << "\nEnter the account number you want to delete\n";
//            cin >> index;
//
//            b1.Delete_Current_Account(index);
//            cout << "\nSuccessfully deleted a Current account at current index\n";
//            break;
//        }
//        default:
//            cout << "\nSorry Try Again!\nEnter right value only one or two\n";
//            break;
//        }
//
//
//
//        break;
//    }
//    case '7':
//    {
//        int cn;
//        cout << "\nEnter the customer ID which you want to get name: ";
//        cin >> cn;
//        b1.GetCustomer_Name(cn);
//
//        break;
//    }
//    case '8':
//    {
//        char optionB;
//        cout << "There are two options available for getting number of account.\nOne is saving account(INTEREST)\t"
//            << "Press '1' for it and \nSecond one is Current Account(NO INTEREST)\tPress '2' for it\n";
//        cin >> optionB;
//
//        switch (optionB)
//        {
//        case '1':
//        {
//     
//            cout << "\nThe number of accounts of Saving account type are: \t" << b1.Get_Saving_NoOfAccounts() << endl;
//            break;
//        }
//        case'2':
//        {
//            cout << "\nThe number of accounts of Current account type are: \t" << b1.Get_Current_NoOfAccounts() << endl;
//            break;
//        }
//        default:
//            cout << "\nSorry Try Again!\nEnter right value only one or two\n";
//            break;
//        }
//
//
//        break;
//    }
//    case '9':
//    {
//        char optionB;
//        cout << "There are two options available for getting the balance in the bank.\nOne is saving account(INTEREST)\t"
//            << "Press '1' for it and \nSecond one is Current Account(NO INTEREST)\tPress '2' for it\n";
//        cin >> optionB;
//
//        switch (optionB)
//        {
//        case '1':
//        {
//
//            cout << "\nThe Balance of Saving account type is: \t" << endl;
//            b1.getAll_saving_Balance();
//            break;
//        }
//        case'2':
//        {
//            cout << "\nThe Balance of Current account type is: \t" << endl;
//            b1.getAll_current_Balance();
//            break;
//        }
//        default:
//            cout << "\nSorry Try Again!\nEnter right value only one or two\n";
//            break;
//        }
//
//
//        break;
//    }
//    case 'e':
//    {
//        cout << "The program is ending now: ";
//
//        break;
//    }
//    default:
//    {
//        cout << "\n\nEnter right value please: \n";
//    }
//    }
//}

Bank::~Bank()
{
    cout << "\nThe Bank class ended \n";
    delete accountsC;
    accountsC = nullptr;
    delete accountsS;
    accountsS = nullptr;
}