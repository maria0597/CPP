#include "Zombie.hpp"

void		randomChump(std::string name)
{
    Zombie	new_zombie = Zombie(name);
	new_zombie.announce();
}

/*
    Quando un oggetto di una classe viene distrutto, il compilatore chiama 
    automaticamente il distruttore della classe. Il distruttore è un metodo 
    speciale che viene chiamato quando l'oggetto viene deallocato (ad esempio, 
    quando l'oggetto esce dallo scope in cui è stato creato). Nella funzione 
    randomChump(), quando la variabile new_zombie esce dallo scope alla fine 
    della funzione, il compilatore chiama automaticamente il distruttore della 
    classe Zombie per deallocare la memoria occupata dall'oggetto.
    
    In breve, non è necessario chiamare il distruttore manualmente in questo 
    caso poiché viene chiamato automaticamente quando l'oggetto viene distrutto.
*/
