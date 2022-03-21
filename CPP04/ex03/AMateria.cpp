#include "AMateria.hpp"


AMateria::AMateria(void)
{
    this->_type = "materia";
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria& materia)
{
    *this = materia;
}

AMateria::~AMateria()
{

}

AMateria& AMateria::operator=(const AMateria& materia)
{
    if (this != &materia)
    {
        this->_type = materia._type;
    }
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    //useless without instance
}
