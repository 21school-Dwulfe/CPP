#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal (void);
        AAnimal (const AAnimal& animal);
        AAnimal & operator=(const AAnimal& animal);
        virtual ~AAnimal();
        
        virtual void    makeSound() const = 0;
        virtual std::string getType()const;
};

#endif
