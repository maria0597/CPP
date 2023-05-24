/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:28:03 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/24 20:28:05 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap clappy("Clappy");
    ScavTrap scavvy("Scavvy");

    clappy.attack("Enemy");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    scavvy.attack("Enemy");
    scavvy.takeDamage(10);
    scavvy.guardGate();

    return 0;
}
