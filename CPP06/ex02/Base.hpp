#pragma once
#ifndef BASE_HPP
#define BASE_HPP

class Base
{

public:
    Base();
    virtual ~Base();
};

Base*   generate();
void    identify(Base* b);
void    identify(Base& p);

#endif
