#ifndef ZOMBI_HPP
#define ZOMBI_HPP

#include <iostream>
#include <string>

class Zombi
{
    public:
        Zombi(std::string name);
        ~Zombi(void);
        void    announce(void)
        {
            std::cout << this->Name << ": "<< "BraiiiiiiinnnzzzZ..."<< std::endl;
        };
        Zombi   *newZombi(std::string name);
    private :
        std::string Name;
    
};

#endif
