/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:37:14 by ael-moha          #+#    #+#             */
/*   Updated: 2025/04/02 08:21:40 by macbookpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << other.name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints <= 0) {
        std::cout << "FragTrap " << name << " is out of hit points and cannot attack!" << std::endl;
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "FragTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    energyPoints--;
    std::cout << "FragTrap " << name << " unleashes a devastating attack on " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
