/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:24 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/29 15:44:33 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;

	std::cout << BOLDGREEN "Welcome to your personal PhoneBook!" << std::endl;

	while (true) 
	{
		if (std::cin.eof())
			return 0;
		std::cout << "Enter your command [ADD, SEARCH, EXIT]: ";
		std::string command;
		std::getline(std::cin, command);

		if (command == EXIT)
			break;
		else if (command == ADD)
			phonebook.add();
		else if (command == SEARCH)
			phonebook.search();
		else
			std::cout << BOLDRED "Invalid command." RESET << std::endl;
	}
	std::cout << BOLDRED "Exiting PhoneBook." RESET << std::endl;
	return 0;
}
