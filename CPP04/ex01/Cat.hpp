#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain*  _brain;
    public:
        Cat (void);
        Cat (std::string type);
        Cat (const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat();

        Brain*  getBrain()const;
        void    setBrain(Brain& Brain);
        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif
