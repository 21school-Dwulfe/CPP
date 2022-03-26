#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
private:
    std::string        _name;
    int                _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& copy);
    ~Bureaucrat();
    
    Bureaucrat& operator=(const Bureaucrat&  bureuacrat);
    const std::string&    getName()const;
    int             getGrade()const;
    void            increase();
    void            decrease();
    void            signForm(Form& form);
    void            executeForm(const Form& form) const;

    class   GradeTooHighException: public std::exception
    {
        public:
        virtual const char *what () const throw ();
    };

    class   GradeTooLowException: public std::exception
    {
        public:
        virtual const char  *what () const throw ();
    }; 

};

std::ostream &operator<< (std::ostream &out, const Bureaucrat& bureuacrat);

#endif
