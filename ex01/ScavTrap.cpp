
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
    std::cout << "ScavTrap " << name << " has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap " << other.name << " has been copied!" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

// Overridden attack method
void ScavTrap::attack(const std::string& target) {
    if (hitPoints <= 0) {
        std::cout << "ScavTrap " << name << " is out of hit points and cannot attack!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ScavTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}