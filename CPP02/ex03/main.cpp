/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:16 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/21 18:32:23 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
	float x,y;

	std::cout << "Point A (x,y): " << std::flush;
	std::cin >> x >> y;
	Point a (x,y);

	std::cout << "Point B (x y): " << std::flush;
	std::cin >> x >> y;
	Point b (x,y);

	std::cout << "Point C (x y): " << std::flush;
	std::cin >> x >> y;
	Point c (x,y);

	std::cout << "Point P (x y): " << std::flush;
	std::cin >> x >> y;
	Point p (x,y);

	if ( bsp(a,b,c,p) == true )
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}

