#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat (void);
        Cat (std::string type);
        Cat (const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat();

        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif
