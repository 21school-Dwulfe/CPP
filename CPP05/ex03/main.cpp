#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
    try
    {
        Bureaucrat vano("Vano", 150);
        Bureaucrat victor("Victor", 5);
        PresidentialPardonForm p("Pardon'te");
        RobotomyRequestForm r("robotomy");
        ShrubberyCreationForm s("sh");
        vano.signForm(p);
        vano.executeForm(p);
        vano.signForm(r);
        vano.executeForm(r);
        std::cout << "-------------------------" << std::endl;
        victor.executeForm(r);
        victor.signForm(r);
        victor.executeForm(r);
        victor.executeForm(p);
        victor.signForm(p);
        victor.executeForm(p);
        std::cout << "-------------------------" << std::endl;
        victor.signForm(s);
        victor.executeForm(s);
        std::cout << "-------------------------" << std::endl;
        Intern volodya = Intern();

        Form *f = volodya.makeForm("PresidentialPardonForm", "victor");
        std::cout << *f <<std::endl;
        Form *g = volodya.makeForm("RobotomyRequestForm", "victor");
        std::cout << *g << std::endl;
        Form *t = volodya.makeForm("ShrubberyCreationForm", "work");
        std::cout << *t << std::endl;
        Form *e = volodya.makeForm("sdfghm", "vi");
        std::cout << e << std::endl;

        delete f;
        delete g;
        delete t;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}