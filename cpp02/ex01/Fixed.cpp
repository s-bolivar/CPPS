/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:22:30 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/28 14:30:12 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int n)
{
	value = n << fract;
}

Fixed::Fixed(const float n)
{
	value = (int)(roundf(n * (1 << fract)));
}

Fixed::~Fixed(){}

int	Fixed::getRawBits() const
{
	return (value);	
}

void	Fixed::setRawBits(int const n)
{
	value = n;	
}

Fixed& Fixed::operator=(Fixed const &other)
{
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

float Fixed::toFloat() const
{
	return ((float)value / (float)(1 << fract));
}

int Fixed::toInt() const
{
	return ((int(value >> fract)));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}