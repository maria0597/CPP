#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) 
{
    ;
}

Weapon HumanB::getWeapon() 
{
    if (_weapon != NULL) 
        return *_weapon;
    else
        return Weapon("");
}

std::string HumanB::getName() 
{
    return _name;
}

void HumanB::attack() 
{
    if (this->_weapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " is unarmed and cannot attack!" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) 
{
    this->_weapon = &weapon;
}

HumanB::~HumanB() 
{
    ;
}
