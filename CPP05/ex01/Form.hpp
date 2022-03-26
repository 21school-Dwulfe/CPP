#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <sstream>

class Bureaucrat;

class Form
{
    const std::string   _name;
    bool                _isSigned;
    const int           _requireGrade;
    const int           _requireExec;

    public:
        Form();
        Form(const std::string name, const int requireGrade, const int requireExec);
        ~Form();
        
        const std::string&  getName() const;
        int                 getRequiredExec() const;
        int                 getRequiredGrade() const;
        bool                getIsSigned() const;
        void                beSigned(const Bureaucrat& bureaucrat);
        //Form& operator=(const Form& form);
        //Form (const Form& form);

        class GradeTooLowExeption : public std::exception
        {
            public:
               virtual const char* what() const throw ();
        };
        class GradeTooHighExeption : public std::exception
        {
            public:
               virtual const char* what() const throw ();
        };

};

std::ostream& operator<< (std::ostream& out, Form& form);

#endif
