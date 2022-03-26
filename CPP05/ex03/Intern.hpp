#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{

public:
    Intern();
    Intern(const Intern& copy);
    ~Intern();
    Form*    makeForm(std::string form, std::string formTarget);
};

#endif
