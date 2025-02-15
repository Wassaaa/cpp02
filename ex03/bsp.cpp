#include "Point.hpp"
#include "Fixed.hpp"

Fixed crossProduct(const Point& a, const Point& b, const Point& point)
{
	Fixed ax = b.getX() - a.getX();
	Fixed ay = b.getY() - a.getY();
	Fixed bx = point.getX() - a.getX();
	Fixed by = point.getY() - a.getY();

	return ax * by - ay * bx;
}
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed crossABP = crossProduct(a, b, point);
	Fixed crossBCP = crossProduct(b, c, point);
	Fixed crossCAP = crossProduct(c, a, point);

	 // Check if any cross product is zero (point is on an edge)
	bool onEdge = (crossABP == 0 || crossBCP == 0 || crossCAP == 0);
	// Check if all cross products have the same sign (positive or negative)
	bool inside = ((crossABP > 0 && crossBCP > 0 && crossCAP > 0) ||
					(crossABP < 0 && crossBCP < 0 && crossCAP < 0));
	return inside && !onEdge;
}
