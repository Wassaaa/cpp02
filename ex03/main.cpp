#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
	Point first(0, 0);
	Point second(5, 0);
	Point third(0, 8);
	Point point(1, 1);
	if (bsp(first, second, third, point))
	{
		std::cout << "TRUE \nPoint " << point.print() << " is inside triangle ";
		std::cout << first.print() << second.print() << third.print() << std::endl;
	}
	else
	{
		std::cout << "FALSE \nPoint " << point.print() << " is NOT inside triangle ";
		std::cout << first.print() << second.print() << third.print() << std::endl;
	}
	return 0;
}
