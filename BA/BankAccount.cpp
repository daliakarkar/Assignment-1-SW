#include <iostream>
using namespace std;
#include"BankAccount.h"


BankAccount::BankAccount()
{
	Name = "";
	AccountCode = "";
	Balance = 0;

}
BankAccount::BankAccount(string x, string y, int z)
{
	Name = x;
	AccountCode = y;
	Balance = z;

}
void BankAccount::DepositAmount(int value)
{
	Balance = Balance + value;

}
void BankAccount::WithdrawAmount(int value)
{
	if (value > Balance)
	{
		cout << "you can't withdraw" << endl;
	}
	else 
	{
			
				Balance = Balance - value;
	}


}
void BankAccount::DisplayAccount()
{
	cout << "Account name is" << Name << endl;
	cout << "Account code is" << AccountCode << endl;
	cout << "Your current balance i" << Balance << endl;

}
