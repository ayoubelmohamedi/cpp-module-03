#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Scavvy");

    // attacks
    scav.attack("Enemy1");
    scav.attack("Enemy2");

    // taking damage
    scav.takeDamage(5);
    scav.takeDamage(8);

    // attack after death
    scav.attack("Enemy3");

    // repairing
    scav.beRepaired(5);

    // another ScavTrap with copy constructor
    ScavTrap scavCopy(scav);

    return 0;
}
