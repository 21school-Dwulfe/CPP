#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    std::string indexes[4];
    void (Harl::*lev[4])();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
        int getIndex(std::string input);
};

#endif
