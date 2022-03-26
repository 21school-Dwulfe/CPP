#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():_name("Undefined"),
    _requireGrade(1),
    _requireExec(1)
{
    _isSigned = false;
}

Form::Form(const std::string name, const int requireGrade, const int requireExec):
    _name(name),
    _requireGrade(requireGrade),
    _requireExec(requireExec)
{
    if (requireGrade > 150 || requireExec > 150)
        throw GradeTooLowExeption();
    if (requireGrade < 1 || requireExec < 1)
        throw GradeTooHighExeption();
    _isSigned = false;
}

Form::~Form(){}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (!this->_isSigned)
    {
        if (bureaucrat.getGrade() <= this->_requireGrade)
            this->_isSigned = true;
        else
            throw Form::GradeTooHighExeption();
    }
}

const std::string& Form::getName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_isSigned);
}

int Form::getRequiredGrade() const
{
    return (_requireGrade);
}

int Form::getRequiredExec() const
{
    return (_requireExec);
}

const char *Form::GradeTooHighExeption::what() const throw ()
{
    return ("required grade of assignment is too high");
}

const char *Form::GradeTooLowExeption::what() const throw ()
{
    return ("required grade of assignment is too low");
}

std::ostream &operator<<(std::ostream& out, Form &form)
{
    out << "\n[ INFO ]\nForm " << form.getName() << " state:\n";
    if (form.getIsSigned())
        out << "\t -Signed\n";
    else
        out << "\t -Not signed\n";
    out << "\t -Min grade to sign: " << form.getRequiredGrade() << "\n";
    out << "\t -Min grade to execute: " << form.getRequiredExec() << std::endl;
    return (out);
}
