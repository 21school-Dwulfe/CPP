#include "ClapTrap.hpp"

int main(void)
{

    ClapTrap soldierBob("Bob");
    ClapTrap soldierBill("Bill");
    ClapTrap soldierIvan("Ivan");
    ClapTrap soldierSlavik(soldierIvan);
    ClapTrap buratino("TOC1");
    soldierSlavik.setName("Slavik");

    soldierIvan.setAttackDamage(3);
    soldierSlavik.setAttackDamage(2);
    buratino.setAttackDamage(10);
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
    soldierBill.takeDamage(10);
    soldierBill.beRepaired(soldierBill.getEnergypoints());
    
    soldierSlavik.attack(soldierBill.getName());
    soldierIvan.attack(soldierBill.getName());
    soldierBill.beRepaired(3);
    soldierBill.takeDamage(soldierIvan.getAttackDamage());

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