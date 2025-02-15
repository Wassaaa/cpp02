#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	testPoint(Point const a, Point const b, Point const c, Point const point)
{
	if (bsp(a, b, c, point))
	{
		std::cout << "Point " << point.print() << " is inside triangle ";
		std::cout << a.print() << b.print() << c.print() << std::endl;
	}
	else
	{
		std::cout << "Point " << point.print() << " is NOT inside triangle ";
		std::cout << a.print() << b.print() << c.print() << std::endl;
	}
}

int main(void) {
	Point first(0, 0);
	Point second(5, 0);
	Point third(0, 8);
	testPoint(first, second, third, Point(2, 2));
	testPoint(first, second, third, Point(0, 2));
	testPoint(first, second, third, Point(2, 0));
	testPoint(first, second, third, Point(2.4, 0.1));
	testPoint(first, second, third, Point(22, 2));
	return 0;
}
