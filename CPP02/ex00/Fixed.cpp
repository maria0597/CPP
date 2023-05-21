/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:24:31 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 16:40:34 by mardolin         ###   ########.fr       */
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