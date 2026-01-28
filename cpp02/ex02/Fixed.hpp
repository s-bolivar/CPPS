#ifndef FIXED_H
#define FIXED_H
#include <string>
#include <iostream>
#include <cmath>
class	Fixed
{
	private:
		int value;
		static const int fract = 8;
	public:
		Fixed();
		Fixed(Fixed const &);
		Fixed& operator=(Fixed const &);
		~Fixed();
		Fixed(int const n);
		Fixed(float const n);
		bool operator<(Fixed const &) const;
		bool operator>(Fixed const &) const;
		bool operator!=(Fixed const &) const;
		bool operator==(Fixed const &) const;
		bool operator<=(Fixed const &) const;
		bool operator>=(Fixed const &) const;
		Fixed operator+(Fixed const &) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		Fixed operator-(Fixed const &) const;
		Fixed operator/(Fixed const &) const;
		Fixed operator*(Fixed const &) const;
		const static Fixed	&min(Fixed const &a, Fixed const &b);
		const static Fixed	&max(Fixed const &a, Fixed const &b);
		int	toInt() const;
		float toFloat() const;
		int getRawBits() const;
		void setRawBits(int);
};

std::ostream& operator<<(std::ostream &, Fixed const &);
Fixed const		&min(Fixed const &a, Fixed const &b);
Fixed const		&max(Fixed const &a, Fixed const &b);

#endif