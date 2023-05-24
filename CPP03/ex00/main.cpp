#include "ClapTrap.hpp"

int main() 
{
    ClapTrap clapTrap("Clappy");

    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(15);
    clapTrap.attack("Enemy");

    return 0;
}
