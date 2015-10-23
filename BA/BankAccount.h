#ifndef __BankAccount__
#define __BankAccount__

#include <string>
using namespace std;

class BankAccount
{
public:
	BankAccount();
	BankAccount(string x, string y, int z);
	void DepositAmount(int value);
	void WithdrawAmount(int value);
	void DisplayAccount();
private:
	string Name;
	string AccountCode;
	int Balance;
};
#endif
