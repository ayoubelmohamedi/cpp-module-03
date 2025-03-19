/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:16:48 by ael-moha          #+#    #+#             */
/*   Updated: 2025/03/19 21:16:49 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap(const std::string& name);
    ~ClapTrap();

    // copy constructor
    ClapTrap(const ClapTrap & other);
    
     //copy assignment constructor 
    ClapTrap& operator=(const ClapTrap& other); 

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif
