/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:22:50 by sbolivar          #+#    #+#             */
/*   Updated: 2026/02/05 16:16:41 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed& Fixed::operator=(Fixed const &other)
{
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{	
}

int Fixed::getRawBits() const
{
	return (value);
}

void Fixed::setRawBits(int n)
{
	value = n;
}

Fixed::Fixed(int const n)
{
	value = n << fract;
}

Fixed::Fixed(float const n)
{
	value = (int)(roundf(n * (1 << fract)));
}

int	Fixed::toInt() const
{
	return (int)(value >> fract);
}

float Fixed::toFloat() const
{
	return ((float)(value) / (float)(1 << fract));
}

std::ostream& operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator<(Fixed const &other) const
{
	return (getRawBits() < other.getRawBits());
}

bool Fixed::operator>(Fixed const &other) const
{
	return (getRawBits() > other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (getRawBits() != other.getRawBits());	
}

bool Fixed::operator==(Fixed const &other) const
{
	return (getRawBits() == other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (getRawBits() <= other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (getRawBits() >= other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed temp;
	temp.setRawBits((getRawBits() + other.getRawBits()));
	return (temp);
}

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed temp;
	temp.setRawBits((getRawBits() - other.getRawBits()));
	return (temp);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed temp;
	temp.setRawBits(getRawBits() / other.getRawBits() << fract);
	return (temp);
}

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed temp;
	temp.setRawBits(getRawBits() * other.getRawBits() >> fract);
	return (temp);
}

Fixed& Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return a < b ? a : b;
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return Fixed::min(a, b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return Fixed::max(a, b);
}