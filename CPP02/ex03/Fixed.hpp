/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:12 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 18:13:09 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
// #include "Point.hpp"

class Fixed
{
	private:
	    int value;
	    static const int fractionalBits = 8;

	public:
	    Fixed();
	    Fixed(const int intValue);
	    Fixed(const float floatValue);
	    Fixed(const Fixed &other);
	    ~Fixed();

	    Fixed& operator=(const Fixed &other);

	    int getRawBits() const;
	    void setRawBits(const int raw);

	    float toFloat() const;
	    int toInt() const;

	    bool operator==(const Fixed &other) const;
	    bool operator!=(const Fixed &other) const;
	    bool operator<(const Fixed &other) const;
	    bool operator>(const Fixed &other) const;
	    bool operator<=(const Fixed &other) const;
	    bool operator>=(const Fixed &other) const;

	    Fixed operator+(const Fixed &other) const;
	    Fixed operator-(const Fixed &other) const;
	    Fixed operator*(const Fixed &other) const;
	    Fixed operator/(const Fixed &other) const;

	    Fixed &operator++();     
		Fixed operator++(int);
	    Fixed &operator--();     
	    Fixed operator--(int);

	    static Fixed &min(Fixed &a, Fixed &b);
	    static Fixed &max(Fixed &a, Fixed &b);
	    static const Fixed &min(const Fixed &a, const Fixed &b);
	    static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
