#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) :IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 4; i++)
        {
            if (this->materia[i] != NULL)
                delete this->materia[i];
            if (copy.materia[i])
            {
                this->materia[i] = copy.materia[i]->clone();
            }
        }
    }
    return (*this);
}

void         MateriaSource::learnMateria(AMateria *materia) 
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = materia;
            break ;
        }
    }
}

AMateria*    MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
        {
            if (type == "cure" && dynamic_cast<Cure *>(this->materia[i]))
                return (this->materia[i]->clone());
            if (type == "ice" && dynamic_cast<Ice *>(this->materia[i]))
                return (this->materia[i]->clone());
        }
    }
    return (0);
}
