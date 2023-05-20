#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		Weapon		getWeapon(void);
		std::string	getName(void);
		void		attack(void);
		void		setWeapon(Weapon &weapon);

		HumanB(std::string name);
		~HumanB();
};

#endif