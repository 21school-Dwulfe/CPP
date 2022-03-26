#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void): _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):_name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name)
{
    *this = copy;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat&  bureuacrat)
{
    if (this != &bureuacrat)
    {
        this->_grade = bureuacrat.getGrade();
        this->_name = bureuacrat.getName();
    }
    return (*this);
}

const std::string&    Bureaucrat::getName()const
{
    return (this->_name);
}

int             Bureaucrat::getGrade()const
{
    return (this->_grade);
}

void            Bureaucrat::increase()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        this->_grade--;
        std::cout << *this << " bureuacrat grade " << this->_grade <<std::endl;
    }
}

void            Bureaucrat::decrease()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_grade++;
        std::cout << *this << " bureuacrat grade " << this->_grade <<std::endl;
    }
}


void    Bureaucrat::executeForm(const Form& form) const
{
    if (form.execute(*this))
        std::cout << *this << " executed " << form.getName() << std::endl;
}

void            Bureaucrat::signForm(Form& form)
{
    if (form.getIsSigned())
    {
        std::cout << "Form " << form.getName() << " is already signed" << std::endl;
    }
    else
    {
        try
        {
            form.beSigned(*this);
            std::cout << *this << " sign form " << form.getName() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << *this << " couldn't sign " << form.getName() << " because "<< e.what() <<std::endl;
        }
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low exception");
}

std::ostream& operator<<(std::ostream & out, const Bureaucrat& bur)
{
    out << bur.getName();
    return (out);
}
