#include "Zombie.hpp"

int main()
{
	std::cout << BOLDGREEN "Watch out! Zombies!" RESET << std::endl;
	//controlla utilizzo
	std::string names[] = 
	{
		"QueenElisabeth",
		"MaurizioCostanzo",
		"AlbertoAngela",
		"GigiProietti",
		"BudSpencer"
	};

	for (int x = 0; x < 5; x++)
	{
		std::cout << BOLDCYAN "ohOHoh " << (x + 1) << " in vista: \n"<< RESET;
		randomChump(names[x]);
	}

	return 0;
} 