#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& intern)
{
    *this = intern;
}

// Intern& Intern::operator=(const Intern& intern)
// {
//     if (this != &intern)
//     {
//         this->
//     }
// } 

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string name, std::string target)
{
    const std::string d[3] = { "PresidentialPardonForm",
                                "RobotomyRequestForm",
                                "ShrubberyCreationForm"};

    int i;
    for (i = 0; name != d[i] && i < 3; i++);
    switch (i)
    {
        case 0:
            return (new PresidentialPardonForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new ShrubberyCreationForm(target));              
    }
    std::cerr << "Intern error"<<std::endl;
    return (NULL); 
}
