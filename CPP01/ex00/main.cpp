/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:39:59 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 11:40:56 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << BOLDGREEN "Watch out! Zombies!" RESET << std::endl;
	//controlla utilizzo
	std::string names[] = 
	{
		"QueenElisabeth",
		"MaurizioCostanzo",
		"AlbertoAngela",
		"GigiProietti",
		"BudSpencer"
	};

	for (int x = 0; x < 5; x++)
	{
		std::cout << BOLDCYAN "ohOHoh " << (x + 1) << " in vista: \n"<< RESET;
		randomChump(names[x]);
	}

	return 0;
}
