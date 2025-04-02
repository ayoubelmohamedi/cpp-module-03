/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:36:37 by ael-moha          #+#    #+#             */
/*   Updated: 2025/04/02 08:02:08 by macbookpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been constructed with "
              << hitPoints << " HP, " << energyPoints << " EP, and "
              << attackDamage << " AD." << std::endl;
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


void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode." << std::endl;
}
