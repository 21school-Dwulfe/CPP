#ifndef MATERIASOURCE_HPP
#define MATERISSOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria    *materia[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& copy);
        virtual ~MateriaSource();

        MateriaSource& operator=(const MateriaSource& copy);

        void         learnMateria(AMateria *materia);
        AMateria*    createMateria(std::string const &type);
};

#endif
