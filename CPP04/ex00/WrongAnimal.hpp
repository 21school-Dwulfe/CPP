#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& wrongAnimal);
        WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
        ~WrongAnimal();
        void    makeSound() const;
        std::string getType() const;
};

#endif
