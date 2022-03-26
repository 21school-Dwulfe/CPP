#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& copy);
    ~PresidentialPardonForm();
    int     execute(const Bureaucrat& executor) const;

    PresidentialPardonForm &operator=(const PresidentialPardonForm& p);

};




#endif
