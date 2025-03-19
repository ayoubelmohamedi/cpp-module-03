/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:31:56 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/19 21:32:01 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
