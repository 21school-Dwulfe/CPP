#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    protected:
        std::string  _type;
    public:
        Ice(void);
        Ice(std::string const & type);
        Ice(const Ice& ice);
        virtual ~Ice();

        Ice& operator=(const Ice& materia);
        virtual std::string const& getType() const;
        virtual AMateria* clone() const;
        virtual void    use(ICharacter& target);
};

#endif
