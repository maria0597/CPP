/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:35:13 by mardolin          #+#    #+#             */
/*   Updated: 2023/05/24 20:28:47 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ; 
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	name = clapTrap.name;
	HitPoints = clapTrap.HitPoints;
	EnergyPoints = clapTrap.EnergyPoints;
	AttackDamage = clapTrap.AttackDamage;
}

ClapTrap::ClapTrap(const std::string name) : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	this->name = name;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "Claptrap assignement operator called" << std::endl;
	if (this != &clapTrap)
	{
		name = clapTrap.name;
		HitPoints = clapTrap.HitPoints;
		EnergyPoints = clapTrap.EnergyPoints;
		AttackDamage = clapTrap.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints >= 1)
	{
		std::cout << "ClapTrap " << LAMPRED << name << RESET << "attacks " << target << ", causing " << LAMPCYAN << AttackDamage << RESET << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout <<  "Claptrap " << LAMPRED << name << RESET << "has no energy points to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	int Signed_Amount = static_cast<unsigned int>(HitPoints);
    if (HitPoints >= Signed_Amount) 
	{
        HitPoints -= Signed_Amount;
        std::cout << "ClapTrap " << LAMPRED << name << RESET <<  " takes " << Signed_Amount << " points of damage. Remaining hit points: " << LAMPCYAN << HitPoints << RESET << std::endl;
    } 
	else 
	{
        HitPoints = 0;
        std::cout << "ClapTrap " << LAMPRED << name << RESET <<  " takes " << amount << " points of damage. It's destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    HitPoints += amount;
    std::cout << "ClapTrap " << LAMPRED << name << RESET << " is repaired for " << amount << " hit points. Total hit points: " << LAMPCYAN << HitPoints << RESET << std::endl;
}