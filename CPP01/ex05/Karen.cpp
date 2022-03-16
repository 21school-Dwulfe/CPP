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

Karen::~Karen(){}

void    Karen::complain(std::string level)
{
    if (!level.empty())
    {
        int index;
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