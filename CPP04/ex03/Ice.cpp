#include "Ice.hpp"

Ice::Ice(void):_type("ice")
{

}

Ice::Ice(const Ice& ice): AMateria()
{
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    if (this != &ice)
    {
        this->_type = ice._type;
    }
    return (*this);
}

Ice::~Ice()
{

}

std::string const& Ice::getType() const
{
    return (this->_type);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
