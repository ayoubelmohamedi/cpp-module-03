/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:31:54 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/20 23:55:24 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
        std::cout << "ClapTrap " << name << " has been assigned!" << std::endl;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is dead and can't attack!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! "
              << "Remaining HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is dead and can't be repaired!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy left to repair!" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " repairs itself, recovering " << amount
              << " hit points! Current HP: " << hitPoints << std::endl;
}
