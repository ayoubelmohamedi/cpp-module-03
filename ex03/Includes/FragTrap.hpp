/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:36:20 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/21 00:44:07by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
public:
    // Constructors and destructor
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    ~FragTrap();

    // Attack method
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif

