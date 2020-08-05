#pragma once
#include<iostream>
using namespace std;
class Person
{
protected:	
	vector<string> Name;
	vector<int> ID;
	vector<string> Branch;

public:
	Person();
	~Person();
	
};

Person::Person()
{
	cout << "\nPerson class started\n";
}

Person::~Person()
{
	cout << "\nPerson class ENDED\n";
}