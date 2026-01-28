#ifndef	FIXED_H
#define	FIXED_H
#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	value;
		static const int fract = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const &);
		Fixed& operator=(Fixed const &);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream &, Fixed const &);

#endif