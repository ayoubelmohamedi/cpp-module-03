/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:52:47 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/20 23:55:18 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) 
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    hitPoints = FragTrap::hitPoints;       
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage; 
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << name << " and ClapTrap " << ClapTrap::name << std::endl;
}
