#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called";
	number = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called";
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

Fixed::Fixed(Fixed &&other) noexcept
{
	std::cout << "Move Constructor called\n";
	number = other.number;
	other.number = 0;
}

Fixed &Fixed::operator=(Fixed &&other) noexcept
{
	std::cout << "Move Assignment Operator called\n";
	if (this == &other)
		return *this;
	number = other.number;
	other.number = 0;
	return *this;
}
