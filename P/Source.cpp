#include <iostream>
using namespace std;
#include "Person.h"
#include <string>

void main()
{
	Person D1;
	Person D2("dalia");
	Person D3("dalia", "Khaled");
	D1.FormalShow();
	D1.Show();
	D2.FormalShow();
	D2.Show();
	D3.FormalShow();
	D3.Show();

	system("pause");

}