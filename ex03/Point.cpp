#include "Point.hpp"

Point::Point()
{

}

//copy constructor
Point::Point(const Point& other)
{
	//value = other.value;
}

//copy assignment
Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	//assign stuff
	return *this;
}

Point::~Point()
{

}