#include <iostream>
#include "Move.h"
using namespace std;

void main()
{
	Move m1(2, 3);
	m1.ShowMOve();
	Move m2(3, 4);
	m2.ShowMOve();
	Move m3 = m2.add(m1);
	m3.ShowMOve();
	system("pause");

}