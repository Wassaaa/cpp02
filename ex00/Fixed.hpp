#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	Fixed(Fixed&& other) noexcept;
	Fixed& operator=(Fixed&& other) noexcept;
	int		getRawBits(void) const;
	void 	setRawBits(int const raw);

private:
	int					number;
	const static int	bits = 8;
};

#endif