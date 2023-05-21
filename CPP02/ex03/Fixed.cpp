/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:08 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 17:26:52 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int intValue)
{
    value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    value = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    value = other.value;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        value = other.value;
    return *this;
}

int Fixed::getRawBits() const
{
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(value + other.value);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(value - other.value);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result.setRawBits((value * other.value) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result.setRawBits((value << fractionalBits) / other.value);
    return result;
}

Fixed& Fixed::operator++()
{
    ++value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    --value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

bool Fixed::operator==(const Fixed& other) const
{
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return value != other.value;
}

bool Fixed::operator<(const Fixed& other) const
{
    return value < other.value;
}

bool Fixed::operator>(const Fixed& other) const
{
    return value > other.value;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return value <= other.value;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return value >= other.value;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}
