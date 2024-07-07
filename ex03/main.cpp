#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(3.223, 5.552);
	std::cout << a.x << "\n" << a.y << std::endl;
	std::cout << a.x.toInt() << "\n" << a.y.toInt() << std::endl;
	return 0;
}
