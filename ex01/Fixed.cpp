#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	number = 0;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	number = nbr << bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called\n";
	number = std::roundf(nbr * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy Constructor called\n";
	number = other.number;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	number = other.number;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return number;
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

float Fixed::toFloat(void) const
{
	return (float)number / (1 << bits);
}

int Fixed::toInt(void) const
{
	return number >> bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
