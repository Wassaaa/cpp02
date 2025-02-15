#include "Fixed.hpp"

Fixed::Fixed()
{
	number = 0;
}

Fixed::Fixed(const int nbr)
{
	number = nbr << bits;
}

Fixed::Fixed(const float nbr)
{
	number = std::roundf(nbr * (1 << bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& other)
{
	number = other.number;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);
	number = other.number;
	return *this;
}

int Fixed::getRawBits(void) const
{
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

/*
Arithmetic operators
*/
Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed sum;
	sum.number = this->number + other.number;
	return sum;
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed sub;
	sub.number = this->number - other.number;
	return sub;
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	long long temp;
	Fixed mult;

	temp = (long long)(this->number * other.number) >> this->bits;
	mult.number = (int)temp;
	return mult;
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	long long temp;

	if (other.number == 0)
		throw std::runtime_error("division by 0");
	Fixed div;
	temp = (long long)((this->number << this->bits) / other.number);
	div.number = (int)temp;
	return div;
}


/*
Comparison operators
*/
bool	Fixed::operator>(const Fixed& other) const
{
	return this->number > other.number;
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return this->number >= other.number;
}

bool	Fixed::operator<(const Fixed& other) const
{
	return this->number < other.number;
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return this->number <= other.number;
}

bool	Fixed::operator==(const Fixed& other) const
{
	return this->number == other.number;
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return this->number != other.number;
}

/*
increment and decrement
*/
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->number += 1;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->number -= 1;
	return temp;
}

Fixed& Fixed::operator++()
{
	this->number += 1;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->number -= 1;
	return *this;
}

/*
min max
*/
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}
Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}
