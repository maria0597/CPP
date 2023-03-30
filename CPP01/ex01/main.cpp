/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:21:04 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/29 15:21:06 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N;

	std::cout << BOLDGREEN "Watch out! Zombies!" RESET << std::endl;
	std::cout << BOLDCYAN "How many zombies do you want in your horde? " RESET << std::flush;
	std::cin >> N;
	Zombie *z = zombieHorde(N, "LordKelvin");
	for (int x = 0; x < N; x++)
	{
		std::cout << "ohOHoh " << (x + 1) << " in vista: \n"<< RESET;
		z[x].announce();
	}
	delete [] z;
	return 0;
} 
