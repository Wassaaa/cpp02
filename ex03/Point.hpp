#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	~Point();
	Fixed const x;
	Fixed const y;

private:
};

#endif