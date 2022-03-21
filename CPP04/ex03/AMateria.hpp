#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& materia);
        virtual ~AMateria();
        
        AMateria& operator=(const AMateria& materia);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
