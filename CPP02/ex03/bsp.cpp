/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:57:39 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 16:19:18 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abx = b.getX() - a.getX();
    Fixed aby = b.getY() - a.getY();
    Fixed acx = c.getX() - a.getX();
    Fixed acy = c.getY() - a.getY();
    Fixed apx = point.getX() - a.getX();
    Fixed apy = point.getY() - a.getY();

    Fixed dotAB = abx * apx + aby * apy;
    Fixed dotAC = acx * apx + acy * apy;

    // Verifica se il punto è all'interno del triangolo
    if (dotAB >= 0 && dotAC >= 0 && dotAB + dotAC <= abx * abx + aby * aby)
        return true;

    return false;
}
