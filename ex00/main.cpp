/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:16:51 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/19 21:16:52 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main() {
    // Creating a ClapTrap object
    ClapTrap robot("Clappy");

    // Testing attacks
    robot.attack("Target1");
    robot.attack("Target2");

    // Taking damage
    robot.takeDamage(4);
    robot.takeDamage(7); // This will reduce HP to 0

    // Attempting to attack after death
    robot.attack("Target3");

    // Trying to repair while dead
    robot.beRepaired(5);

    // Creating another ClapTrap object
    ClapTrap robot2("Blinky");

    // Attacking and repairing normally
    robot2.attack("Target4");
    robot2.takeDamage(5);
    robot2.beRepaired(3);

    // Testing energy depletion
    for (int i = 0; i < 12; ++i) {
        robot2.attack("EnergyTestTarget");
    }

    // Trying to repair with no energy left
    robot2.beRepaired(5);

    return 0;
}
