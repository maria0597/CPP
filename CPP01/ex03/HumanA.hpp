#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		Weapon&		getWeapon(void);
		std::string	getName(void);
		void		attack(void);

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif