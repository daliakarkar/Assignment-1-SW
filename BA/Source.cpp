#include <iostream>
using namespace std;
#include"BankAccount.h"
#include <cstdio>

void main()
{
	
	BankAccount dalia;
	dalia.DisplayAccount(); 
	dalia.DepositAmount(20);
	dalia.WithdrawAmount(10);



	
	system("pause");
}
