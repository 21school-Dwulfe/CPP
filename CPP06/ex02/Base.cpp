#include "Base.hpp"
#include <cstdlib>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate(void)
{
    switch(rand() % 3)
    {
        case 0:
            std::cout << "Creating A" <<std::endl;
            return (new A());
        case 1:
            std::cout << "Creating B" <<std::endl;
            return (new B());
        case 2:
            std::cout << "Creating C" <<std::endl;
            return (new C());
    }
    return (0);
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B" <<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "Type B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "Type C" << std::endl;
    }
    catch(const std::exception& e){}
}

Base::Base(){}

Base::~Base(){}
