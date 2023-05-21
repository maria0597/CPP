/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:08 by mardolin          #+#    #+#             */
/*   Updated: 2023/04/24 16:47:23 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : x(0)
{
	return ;
}

Fixed::Fixed(const Fixed &x)
{
	this->x = x.getRawBits();
	return ;
}

Fixed::Fixed(const int i)
{
	this->x = i * (1 << this->bits);
	return ;
}

Fixed::Fixed(const float f)
{
	this->x = roundf(f * (1 << this->bits));
	return ;
}

Fixed	&Fixed::operator=(const Fixed &x)
{
	if (this == &x)
		return *(this);
	this->x = x.getRawBits();
	return *(this);
}

Fixed	&Fixed::operator+(const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() + fixed.getRawBits());
	return *(this);
}

Fixed	&Fixed::operator++(void)
{
	this->x += 1;
	return *(this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->x++;
	return (tmp);
}

Fixed	&Fixed::operator-(const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() - fixed.getRawBits());
	return *(this);
}

Fixed	&Fixed::operator--(void)
{
	this->x -= 1;
	return *(this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->x--;
	return (tmp);
}

Fixed	&Fixed::operator*(const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() * fixed.getRawBits() >> this->bits);
	return *(this);
}

Fixed	&Fixed::operator/(const Fixed &fixed)
{
	this->setRawBits(this->getRawBits() / fixed.getRawBits());
	return *(this);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}
Fixed::~Fixed()
{
	return ;
}

int Fixed::getRawBits( void ) const
{
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