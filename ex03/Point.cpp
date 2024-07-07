#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float x, const float y) : x(x), y(y) {}

// copy constructor
Point::Point(const Point& other) : x(other.x), y(other.y) {}

const Fixed& Point::getX() const
{
	return (x);
}

const Fixed& Point::getY() const
{
	return (y);
}

std::string Point::print() const
{
	std::ostringstream oss;
	oss.precision(1);
	oss << std::fixed << "(" << x.toFloat() << ":" << y.toFloat() << ")";
	return oss.str();
}

Point::~Point()
{

}
