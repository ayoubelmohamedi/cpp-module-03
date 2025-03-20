/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:43:34 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/20 23:43:49 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap(const std::string& name);

    ~DiamondTrap();

    void attack(const std::string& target);
    void whoAmI();
};

#endif
