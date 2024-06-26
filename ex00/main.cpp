#include "Fixed.hpp"
#include <utility>

Fixed createTemporary() {
    return Fixed();
}

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "\nTesting move constructor:" << std::endl;
    Fixed d = createTemporary();
    std::cout << d.getRawBits() << std::endl;

    std::cout << "\nTesting move assignment:" << std::endl;
    Fixed e;
    e = createTemporary();
    std::cout << e.getRawBits() << std::endl;

    std::cout << "\nTesting explicit moves:" << std::endl;
    Fixed f = std::move(a);
    std::cout << f.getRawBits() << std::endl;
    std::cout << "a after move: " << a.getRawBits() << std::endl;

    Fixed g;
    g = std::move(b);
    std::cout << g.getRawBits() << std::endl;
    std::cout << "b after move: " << b.getRawBits() << std::endl;
	return 0;
}