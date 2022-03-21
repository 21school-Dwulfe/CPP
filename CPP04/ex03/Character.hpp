#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria* inventory[4];
    public:
        Character(void);
        Character(std::string const & name);
        Character(const Character& character);
        ~Character();
        Character& operator=(const Character& op);
        std::string const & getName() const;
        virtual void    setName(std::string& name);
        virtual void    equip(AMateria *m);
        virtual void    unequip(int idx);
        virtual void    use(int idx, ICharacter &target);
};

#endif
