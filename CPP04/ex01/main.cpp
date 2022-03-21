#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    
    Animal *animals[4];

    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
        std::cout << std::endl;
    }

    //check deep copy
    Animal a;
    Dog dog;
    Dog dog2(dog);
    Cat cat;
    Cat cat2(cat);

    std::cout << "assign start" << std::endl;
    cat = cat2;
    dog = dog2;
    std::cout << "assign end" << std::endl;

    return (0);
}
