#include "HumanB.hpp"
#include "HumanA.hpp"
#include <cstdlib>

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        Weapon an = Weapon("Axe");

        HumanA bob = HumanA("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
        bob.setWeapon(an);
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim = HumanB("Jim");
        //jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    
    }
    return (0);
}