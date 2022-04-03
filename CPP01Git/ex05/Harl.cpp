#include "Harl.hpp"

Harl::Harl()
{

   this->lev[0] = &Harl::debug;
   this->lev[1] = &Harl::info;
   this->lev[2] = &Harl::warning;
   this->lev[3] = &Harl::error;
   this->indexes[0] = "DEBUG";
   this->indexes[1] = "INFO";
   this->indexes[2] = "WARNING";
   this->indexes[3] = "ERROR";
}

Harl::~Harl(){}

void    Harl::complain(std::string level)
{
    if (!level.empty())
    {
        int index = 0;
        for (int i = 0; i < 4; i++)
        {
            if (level == this->indexes[i])
            {
                index = i;
                break ;
            }
        }
        (this->*lev[index])();
    }
}