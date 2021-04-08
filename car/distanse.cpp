#include "distanse.h"
#include <iostream>
using namespace std;
void distanse::setdistsnse(int f, float n)
{
	feet = f;
	inches = n;
}

void distanse::print()
{
	cout << "Feet = " << feet << "\t" << "Inches = " << inches << endl;
}
distanse :: distanse() :feet(0), inches(0.0)
{
}

distanse :: distanse(int f, float n) : feet(f), inches(n) 
{
}

distanse distanse::add(distanse d2)
{
	distanse result;
	result.feet = feet + d2.feet;
	result.inches = inches + d2.inches;
	return result;
}

distanse::~distanse()
{
}



