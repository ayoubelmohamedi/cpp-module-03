
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../ex00/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    // Constructors and Destructor
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();

    // Overridden attack method
    void attack(const std::string& target);
    void guardGate();
};

#endif // SCAVTRAP_HPP

