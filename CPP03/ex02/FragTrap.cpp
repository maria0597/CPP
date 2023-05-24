#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() 
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FlagTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) 
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FlagTrap copy constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
	*this = fragTrap;
    std::cout << name << ": (Im a scav) You enjoying the party, minion?" << std::endl;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	if (this != &fragTrap)
	{
		name = fragTrap.name;
		HitPoints = fragTrap.HitPoints;
		EnergyPoints = fragTrap.EnergyPoints;
		AttackDamage = fragTrap.AttackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << BOLDYELLOW << "Schiatt o 5 fra" << RESET << std::endl;
}
