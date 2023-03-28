/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:30:35 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/28 16:30:37 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].~Contact();
}
	
void PhoneBook::add(void)
{
	if (amount == MAX_CONTACTS)
	{
		std::cout << LAMPRED "-> It seems you have a lot of people to kill..." RESET << std::endl;
		std::cout << BOLDYELLOW "-> I'll overwrite the last contact." RESET << std::endl;
		amount--;
	}
	
	Contact new_contact;
	new_contact.add();
	contacts[amount] = new_contact;
	amount++;
}

void PhoneBook::show(void)
{
	std::cout << BOLDYELLOW " ___________________________________________ " RESET << std::endl;
	std::cout << BOLDYELLOW "|                                           |" RESET << std::endl;
	std::cout << BOLDYELLOW "|  Index   |First Name| Last Name| Nickname |" RESET << std::endl;
	std::cout << BOLDYELLOW "|___________________________________________|" RESET << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display(i);
	std::cout << BOLDYELLOW "|___________________________________________|" RESET << std::endl;
	std::cout << "                                             " << std::endl;
}

void PhoneBook::search(void)
{
	int         id;
	std::string buf;

	if (this->amount == 0)
		std::cout << LAMPCYAN "> " << "It seems a little empty here..." RESET << std::endl;
	else
	{
		this->show();
		std::cout << BOLDGREEN "> " RESET << BOLDYELLOW "Enter Index to display Informations or 8 to exit." RESET << std::endl;
		std::cout << BOLDGREEN "> " RESET;
		std::cin >> id;
		if (id < 0 || (id >= this->amount && id != 8))
			std::cout << LAMPRED "> " << "Invalid Index." RESET << std::endl;
		else if (id == 8)
			;
		else
			this->contacts[id].show();
		std::getline(std::cin, buf);
		if (std::cin.eof())
			return;
		std::cout << std::endl;
	}
}

// bool	isValid(PhoneBook *rubric, int i) MAYBE