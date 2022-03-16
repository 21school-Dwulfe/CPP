#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen
{
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    std::string indexes[4];
    void (Karen::*lev[4])();
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
        int getIndex(std::string input);
};

#endif
