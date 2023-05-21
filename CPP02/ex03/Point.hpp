/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:57:26 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 18:31:02 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(Fixed const xVal, Fixed const yVal);
        Point(const Point& next);
        Point& operator=(const Point &next);
        ~Point();
    
        Fixed const &getX() const;
        Fixed const &getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
