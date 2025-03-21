/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:31:56 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/20 23:55:13 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main() {
    
    FragTrap flag("Flaggy");

    flag.attack("Enemy1");

    flag.takeDamage(30);

    flag.beRepaired(20);

    flag.highFivesGuys();

    flag.takeDamage(100); 
    flag.beRepaired(50);  
    

    return 0;
}
