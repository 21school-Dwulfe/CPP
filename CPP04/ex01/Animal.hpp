#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal (void);
        Animal (const Animal& animal);
        Animal & operator=(const Animal& animal);
        virtual ~Animal();
        
        virtual void    makeSound() const;
        virtual std::string getType()const;
};

#endif
