#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed&	operator++();
	Fixed&	operator--();

	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);


private:
	int					number;
	const static int	bits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
