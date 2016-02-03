#include<cmath>  
#include"Point.h"

// Default Constructor
Point::Point()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;

}

// Constructor to set Values
Point::Point(double xI, double yI, double zI)
{
	x = xI;
	y = yI;
	z = zI;
	
}

// Destructor, nothing new was allocatted however it is good use to ahve it and it would otherwise be generated anyways
Point::~Point()
{
	//Nothing to do

}

// Set functions used to hcange value of variables.
void Point::setX(double newX)
{
	x = newX;

}

void Point::setY(double newY)
{
	y = newY;

}

void Point::setZ(double newZ)
{
	z = newZ;

}

// Gets the current value of the variable
double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}
double Point::getZ() const
{
	return z;
}

// Distance Formula
double Point::distanceTo(const Point& d) const
{
	double xDistance, yDistance, zDistance;

	xDistance = this->x - d.getX();
	yDistance = this->y - d.getY();
	zDistance = this->z - d.getZ();

	double distanceTo;
	distanceTo = sqrt(pow(xDistance, 2) + pow(yDistance, 2) + pow(zDistance, 2));

	return distanceTo;
}