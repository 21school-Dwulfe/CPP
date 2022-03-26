#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Unknown"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string& name, int grade):_name(name), _grade(grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat::~Bureaucrat()
{

}

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
        std::cout << this << " bureuacrat grade " << this->_grade <<std::endl;
    }
}

void            Bureaucrat::decrease()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_grade++;
        std::cout << this << " bureuacrat grade " << this->_grade <<std::endl;
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
