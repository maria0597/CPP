/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:29:02 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/24 20:29:04 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    ClapTrap clappy("Clappy");
    ScavTrap scavvy("Scavvy");
    FragTrap fraggy("Fraggy");

    clappy.attack("Enemy");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    scavvy.attack("Enemy");
    scavvy.takeDamage(10);
    scavvy.guardGate();

    fraggy.attack("Enemy");
    fraggy.takeDamage(10);
    fraggy.highFivesGuys();

    return 0;
}