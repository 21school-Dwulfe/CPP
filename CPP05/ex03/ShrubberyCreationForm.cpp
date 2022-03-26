#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): \
    Form("undefined", 145, 137), _target("undefined")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): \
    Form(target, 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): \
     Form(copy._target, 145, 137), _target(copy._target)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
    if (this != &form)
    {
        this->_target = form._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

int     ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
     if (!this->getIsSigned())
    {
        std::cout  << this->getName() << " is not signed." << "Can't be executeed by " << executor.getName() <<std::endl;
        return (0);
    }
    if (executor.getGrade() <= this->getRequiredExec())
    {
        std::string d;
        d =  "            &&& &&  & &&\n\
         && &\\/& ()|/ @, &&\n\
       &\\/(/&/&||/& /_/)_&/_&\n\
     &() &\\/&|()|/&\\/ '%' & ()\n\
    &_\\_&&_\\|& |&&/&__%_/_& &&\n\
   &&   && & &| &| /& & % ()& /&&\n\
    ()&_---()&\\&\\|&&-&&--%---()~\n\
          &&   \\|||\n\
                |||\n\
                |||\n\
                |||\n\
                |||\n";

        std::ofstream file( (_target + "_shrubbery").c_str());
        file << d;
        file.close();
        std::cout << "File '" << _target << "_shrubbery' was created" << std::endl;
        return (1);
    }
    return (0);
}


