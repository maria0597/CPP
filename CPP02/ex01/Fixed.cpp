/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:34:12 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 16:40:28 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : x(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &x)
{
	std::cout << "Copy constructor called" << std::endl;
	this->x = x.getRawBits();
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->x = i * (1 << this->bits);
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->x = roundf(f * (1 << this->bits));
	return ;
}

Fixed	&Fixed::operator=(const Fixed &x)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &x)
		return *(this);
	this->x = x.getRawBits();
	return *(this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->x);
}

void Fixed::setRawBits(int const raw)
{
	this->x = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (((float)this->x / (float)(1 << this->bits)));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}