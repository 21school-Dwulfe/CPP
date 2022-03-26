#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(): Form("undefined", 72, 45), _target("undefined"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy._target, 72, 45)
{  
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
    if (this != &form)
    {
        this->_target = form._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

int RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!this->getIsSigned())
    {
        std::cout  << this->getName() << " is not signed." << "Can't be executeed by " << executor.getName() <<std::endl;
        return (0);
    }
    if (executor.getGrade() <= this->getRequiredExec())
    {
        std::cout << "Drillllllllling noooooizze" << std::endl;
        if (std::rand() % 2 == 0)
        {
            std::cout << _target << " has been robotomized successfully." << std::endl;
            return (1);
        }
        std::cout << "The Robotomy is failed" << std::endl;
    }
    return (0);
}
