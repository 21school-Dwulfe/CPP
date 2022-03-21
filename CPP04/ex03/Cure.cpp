#include "Cure.hpp"

Cure::Cure(void): _type("cure")
{
    
}

Cure::Cure(const Cure& cure):AMateria()
{
    *this = cure;
}

Cure::~Cure(){}

Cure& Cure::operator=(const Cure& cure)
{
    if (this != &cure)
    {
        this->_type = cure._type;
    }
    return (*this);
}

std::string const& Cure::getType() const
{
    return (this->_type);
}

AMateria*   Cure::clone()const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
