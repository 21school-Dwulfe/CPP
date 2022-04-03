#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat vano("Vano", 150);
        Bureaucrat victor("Victor", 150);
        Form d = Form("Act", 148, 148);
        vano.signForm(d);
        vano.increase();
        vano.increase();
        vano.signForm(d);
        vano.signForm(d);
        std::cout << d << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}