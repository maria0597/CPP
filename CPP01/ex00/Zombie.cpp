/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:39:41 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 11:39:42 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << BOLDRED << this->name << ": Dead." RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << BOLDMAGENTA << this->name << ": " << "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}
