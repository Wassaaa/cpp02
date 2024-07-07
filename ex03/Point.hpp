#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>
# include <sstream>
# include <cmath>
class Point
{
public:
	Point();
	Point(const float x, const float y);

	Point(const Point& other);
	Point& operator=(const Point& other) = delete;

	const Fixed& getX() const;
	const Fixed& getY() const;
	std::string	print() const;

	~Point();

private:
	Fixed const x;
	Fixed const y;
};

#endif
