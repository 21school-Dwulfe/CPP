#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

    DiamondTrap soldierBill("Bill");
    DiamondTrap soldierIvan("Ivan");
    DiamondTrap buratino("TOC1");

    soldierIvan.setAttackDamage(3);
    buratino.setAttackDamage(100);
    soldierBill.setAttackDamage(2);

    soldierIvan.attack(soldierBill.getName());
    soldierBill.takeDamage(soldierIvan.getAttackDamage());
    soldierBill.beRepaired(3);
    soldierIvan.takeDamage(soldierBill.getAttackDamage());
    soldierIvan.beRepaired(3);
    buratino.attack(soldierBill.getName());
    soldierBill.takeDamage(100);
    soldierBill.beRepaired(soldierBill.getEnergypoints());
    soldierBill.attack(soldierIvan.getName());

    soldierIvan.attack(soldierBill.getName());
    soldierBill.beRepaired(3);
    soldierBill.takeDamage(soldierIvan.getAttackDamage());

    soldierIvan.guardGate();
    soldierBill.highFivesGuys();
    soldierIvan.whoAmI();
    return (0);
}