#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);

    int execute(const Bureaucrat& bureaucrat) const;
};

#endif
