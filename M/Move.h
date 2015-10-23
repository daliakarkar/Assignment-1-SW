#ifndef __MOve__
#define __MOve__
#include <iostream>
#include <string>
using namespace std;


class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void ShowMOve() const;
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);


};
#endif 