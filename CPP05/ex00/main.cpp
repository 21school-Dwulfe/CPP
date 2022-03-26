#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat vano("Vano", 150);

        for (int i = 0; i < 150; i++)
        {
            vano.increase();
           
        }
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat givi("givi", 1);

        for (int i = 0; i < 151; i++)
        {
            givi.decrease();
        }
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return (0);
}