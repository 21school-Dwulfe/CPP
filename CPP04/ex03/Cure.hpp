#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
    protected:
        std::string  _type;
    public:
        Cure(void);
        Cure(std::string const & type);
        Cure(const Cure& cure);
        virtual ~Cure();

        Cure& operator=(const Cure& cure);
        virtual std::string const& getType() const;
        virtual AMateria*   clone()const;
        virtual void    use(ICharacter& target);
};

#endif
