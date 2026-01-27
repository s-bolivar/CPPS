#ifndef	FIXED_H
#define	FIXED_H
#include <string>
#include <iostream>

class Fixed
{
	private:
		int	value;
		static const int fract = 8;
	public:
		Fixed();
		Fixed(Fixed const &);
		Fixed& operator=(Fixed const &);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif