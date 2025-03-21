/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:31:56 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/21 00:52:52 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DiamondBoy");

    // Display DiamondTrap's attributes
    diamond.whoAmI();

    // Use inherited methods from ScavTrap and FragTrap
    diamond.attack("EnemyBot");    // Should use ScavTrap's attack
    diamond.takeDamage(20);        // Inherited from ClapTrap
    diamond.beRepaired(15);        // Inherited from ClapTrap


    return 0;
}