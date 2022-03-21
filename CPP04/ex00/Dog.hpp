#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(std::string dog);
        Dog(const Dog& dog);
        Dog& operator=(const Dog& dog);
        ~Dog();
        
        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif
