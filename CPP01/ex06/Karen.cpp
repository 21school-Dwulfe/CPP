#include "Karen.hpp"

Karen::Karen()
{

   this->lev[0] = &Karen::debug;
   this->lev[1] = &Karen::info;
   this->lev[2] = &Karen::warning;
   this->lev[3] = &Karen::error;
   this->indexes[0] = "DEBUG";
   this->indexes[1] = "INFO";
   this->indexes[2] = "WARNING";
   this->indexes[3] = "ERROR";
}

int Karen::getIndex(std::string input)
{
    for (int i = 0; i < 4; i++)
    {
        if (input == this->indexes[i])
        {
            return (i);
        }
    }
    return (-1);
}

Karen::~Karen(){}

void    Karen::complain(std::string level)
{
    int index = this->getIndex(level);

    if (index != -1)
    {
        for (; index < 4; index++)
        {
            (this->*lev[index])();
        }
    }
    else
        std::cerr << "[Probably complaining about insignificant problems]" << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "\n" << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
};

void   Karen::info(void)
{
    std::cout << "\n" << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"  << std::endl;
};

void    Karen::warning(void)
{
    std::cout << "\n" << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
};

void    Karen::error(void)
{
    std::cout << "\n" << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};
