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
