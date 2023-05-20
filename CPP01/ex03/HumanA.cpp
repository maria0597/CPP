#include "Weapon.hpp"
#include "HumanA.hpp"


	HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) 
    {
        ;
    }

    Weapon& HumanA::getWeapon() 
    {
        return _weapon;
    }

    std::string HumanA::getName() 
    {
		return _name;
	}

	void HumanA::attack() 
    {
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	}

	HumanA::~HumanA() 
    {
        ;
    }
