#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl 
{
    private:
        typedef void (Harl::*ComplainFunction)();

        void debug();
        void info();
        void warning();
        void error();

    public:
        void complain(std::string level);
        Harl();
        ~Harl();
};

#endif