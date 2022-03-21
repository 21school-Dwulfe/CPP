#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain* _brain;
    public:
        Dog(void);
        Dog(std::string dog);
        Dog(const Dog& dog);
        Dog& operator=(const Dog& dog);
        ~Dog();
        Brain*  getBrain()const;
        void    setBrain(Brain& Brain);
        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif
