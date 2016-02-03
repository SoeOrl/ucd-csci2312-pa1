#include<cmath> 
#include"Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
	//variables
	double area, semiPerim, a2b, a2c, b2c;

	//find the distances for herons
	a2b = a.distanceTo(b);
	a2c = a.distanceTo(c);
	b2c = b.distanceTo(c);
	semiPerim = (a2b + b2c + a2c) / 2;
	
	//herons formula
	area = sqrt(semiPerim * (semiPerim - a2b) * (semiPerim - a2c) * (semiPerim - b2c));

	return area;

}