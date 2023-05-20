#include "harl.hpp"

int main(int argc, char const **argv) 
{
    Harl harl;
    
    if (argc < 2 || !argv[1][0])
	{
		std::cout << "Correct usage: ./harl <DEBUG|INFO|WARNING|ERROR>" << std::endl;
		return (0);
	}
    harl.complain(argv[1]);
    // Esempi di chiamate a complain()
    //harl.complain("DEBUG");
    //harl.complain("INFO");
    //harl.complain("WARNING");
    //harl.complain("ERROR");
    
    return 0;
}
