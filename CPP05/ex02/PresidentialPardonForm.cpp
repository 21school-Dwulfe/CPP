#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): \
    Form("undefined", 25, 5), _target("undefined") 
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : \
    Form(target, 25, 5), _target(target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):  Form(copy._target, 25, 5)
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

int    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!this->getIsSigned())
    {
        std::cout  << this->getName() << " is not signed." << "Can't be executeed by " << executor.getName() <<std::endl;
        return (0);
    }
    if (executor.getGrade() <= this->getRequiredExec())
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        return (1);
    }
    return (0);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
    if (this != &p)
    {
        this->_target = p._target;
    }
    return (*this);
}
