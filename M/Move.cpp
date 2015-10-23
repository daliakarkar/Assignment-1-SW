
using namespace std;
#include <string>
#include "Move.h"


Move::Move(double a, double b)
{
	 x = a;
	 y = b;
}
void Move::ShowMOve() const
{
	cout << "X is" << x << endl;
	cout << "Y is" << y << endl;
}
Move Move::add(const Move & m) const
{
	double Z1 = x + m.x;
	double Z2 = y + m.y;
	return Move(Z1, Z2);

}
void Move::reset(double a, double b){
	 x = a;

	 y = b;


}