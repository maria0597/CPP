#include "harl.hpp"

Harl::Harl() 
{
    std::cout << "Harl is here!" << std::endl;
}

Harl::~Harl() 
{
    std::cout << "Harl is leaving!" << std::endl;
}

void Harl::debug() 
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() 
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() 
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

//array di puntatori a funzione ComplainFunction inizializzandoli come ountatori ai metosi + CREAZIONE ARRAY levels CONTENTENTE STRINGHE CORRISPONDENTI
void Harl::complain(std::string level) {
    
    typedef void (Harl::*ComplainFunction)(); //array di puntatoti a funzione membto
    
    ComplainFunction arr[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; //array inizializzato coni puntatori ai metodi->associazione livello a puntatore a funzione corrisp
    
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++) 
    {
        if (level == levels[i]) 
        {
            (this->*arr[i])(); //richiamo dinamicamente il metodo, fereferezionando il puntatore a dunzione membro viene restituito il puntatore al metodo corrispondente.
            //L'operatore () viene utilizzato per invocare il metordo ed è possibile perch+ l'operatore * applicato ad un puntatore a funzione membro restituisce un rif al metodo stesso, chiamato come NORMALE FUNZIONE
            // risultato NO consecuzione di if/else if
            return;
        }
    }
}

