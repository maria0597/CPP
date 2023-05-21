/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:57:22 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 18:31:17 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
// #include "Fixed.hpp"

Point::Point() : x(0), y(0) 
{
    ;
}

Point::Point(Fixed const xVal, Fixed const yVal) : x(xVal), y(yVal) 
{
    ;
}

Point::Point(const Point& next) : x(next.x), y(next.y) 
{
    ;
}

Point::~Point() 
{
    ;
}

Fixed const &Point::getX() const 
{
    return x;
}

Fixed const &Point::getY() const 
{
    return y;
}

Point& Point::operator=(Point const &next) 
{
    (void) next;
    return *this;
}
