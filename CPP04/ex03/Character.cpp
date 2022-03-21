#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const & name):_name(name)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character& character):ICharacter()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    *this = character;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

Character& Character::operator=(const Character& op)
{
    if (this != &op)
    {
        AMateria* ptr_tmp;

        this->_name = op._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (op.inventory[i])
            {
                if (op.inventory[i]->getType() == "cure")
                    ptr_tmp = op.inventory[i]->clone();
                else
                    ptr_tmp = op.inventory[i]->clone();
                this->inventory[i] = ptr_tmp;
            }
        }
    }
    return(*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::setName(std::string& name)
{
    this->_name = name;
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter &target)
{
    (void)idx;
    (void)target;
    if (idx >= 0 && idx < 4)
       this->inventory[idx]->use(target);
}
