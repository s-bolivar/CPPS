/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <sbolivar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:22:30 by sbolivar          #+#    #+#             */
/*   Updated: 2026/01/27 14:57:24 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
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