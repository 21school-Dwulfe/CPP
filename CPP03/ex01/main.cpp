#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

    ScavTrap soldierBob("Bob");
    ScavTrap soldierBill("Bill");
    ScavTrap soldierIvan("Ivan");
    ScavTrap soldierSlavik(soldierIvan);
    ScavTrap buratino("TOC1");
    soldierSlavik.setName("Slavik");

    soldierIvan.setAttackDamage(3);
    soldierSlavik.setAttackDamage(2);
    buratino.setAttackDamage(100);
    soldierBob.setAttackDamage(3);
    soldierBill.setAttackDamage(2);

    soldierIvan.attack(soldierBill.getName());
    soldierBill.takeDamage(soldierIvan.getAttackDamage());
    soldierBill.beRepaired(3);
    soldierBob.attack(soldierIvan.getName());
    soldierIvan.takeDamage(soldierBob.getAttackDamage());
    soldierIvan.beRepaired(3);
    soldierSlavik.attack(soldierBob.getName());
    soldierBob.takeDamage(soldierSlavik.getAttackDamage());
    buratino.attack(soldierBill.getName());
    soldierSlavik.guardGate();
    soldierBill.takeDamage(100);
    soldierBill.beRepaired(soldierBill.getEnergypoints());
    soldierBill.attack(soldierIvan.getName());

    soldierSlavik.attack(soldierBill.getName());
    soldierIvan.attack(soldierBill.getName());
    soldierBill.beRepaired(3);
    soldierBill.takeDamage(soldierIvan.getAttackDamage());

    soldierBill.guardGate();
    soldierBob.attack(soldierIvan.getName());
    soldierIvan.takeDamage(3);
    soldierBob.attack(soldierIvan.getName());
    soldierIvan.takeDamage(3);
    soldierBob.attack(soldierIvan.getName());
    soldierIvan.takeDamage(3);
    soldierBob.attack(soldierIvan.getName());
    soldierIvan.takeDamage(3);
    soldierIvan.beRepaired(8);
    soldierIvan.attack(soldierBob.getName());
    return (0);
}