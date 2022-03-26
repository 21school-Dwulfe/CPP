#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& copy);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);

    int     execute(const Bureaucrat& bureaucrat) const;
};

#endif
