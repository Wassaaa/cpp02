#include "Point.hpp"
#include "Fixed.hpp"


Fixed area(Point const a, Point const b, Point const c)
{
	Fixed first = a.getX() * (b.getY() - c.getY());
	Fixed second = b.getX() * (c.getY() - a.getY());
	Fixed third = c.getX() * (a.getY() - b.getY());

	Fixed area = std::abs(first.toFloat() + second.toFloat() + third.toFloat());
	return (area / 2);
}
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed triangle = area(a, b, c);
	Fixed pbc = area(point, b, c);
	Fixed pac = area(a, point, c);
	Fixed pab = area(a, b, point);
	std::cout << triangle << std::endl;
	std::cout << pbc + pac + pab << std::endl;
	return (pbc + pac + pab) <= triangle;
}
