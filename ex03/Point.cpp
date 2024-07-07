#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

//copy constructor
// Point::Point(const Point& other)
// {
// }

//copy assignment
// Point& Point::operator=(const Point& other)
// {
// 	if (this == &other)
// 		return (*this);
// 	//assign stuff
// 	return *this;
// }

Point::~Point()
{

}