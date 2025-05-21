/*
Q4. Simple Bank ATM Menu
Problem:
Create a class ATMAccount with members balance, accountHolder.
Provide functions deposit(), withdraw(), and checkBalance() which modify and show balance. 
Simulate interaction in main().


*/



#include<iostream>
#include<string>

using namespace std;

class ATMAccount
{
private:
	unsigned long int acc_no;
	string acc_accountHolder;
	float acc_balance;
	void deposit(float b)
	{
		acc_balance += b;

	}
	void withdraw(float b)
	{
		acc_balance -= b;

	}
	

public:
	void setHolderName(string n)
	{
		acc_accountHolder = n;
	}
	void setAaccNumber(unsigned long int g)
	{
		acc_no = g;
		acc_balance = 0.0;
	}
	
	void display()
	{
		int choice;
		float value;
		cout << "choose a number:" << endl;
		cout << "0. deposit()" << endl;
		cout << "1. withdraw()" << endl;
		cout << "2. break" << endl;
		cout << "3. balance" << endl;
		cout << "4. exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			cin >> value;
			deposit(value);
			break;
		case 1:
			cin >> value;
			withdraw(value);
			break;
		case 2:
			
			break;
		case 3:
			checkBalance();
			break;
		case 4:
			exit(0);
		default:
			cout << "not correct choice:" << endl;
			break;

		}
	
	
	}

	void checkBalance()
	{
		cout << "acc name       \t:" << acc_accountHolder << endl;
		cout << "---------------------------" << endl;
		cout << "acc no    \t:" << acc_no << endl;
		cout << "balance   \t:" << acc_balance << endl;
		
	}
};




int main()
{
	ATMAccount atm;
	string name = "harry ";
	unsigned long int acNo=1234443;
	float bal = 10000.68;

	atm.setHolderName(name);
	atm.setAaccNumber(acNo);
	while(true)
	{
		atm.display();
	}

	//atm.checkBalance();

	return 0;
}