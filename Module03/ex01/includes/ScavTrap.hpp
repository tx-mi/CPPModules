#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap &obj);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap& operator=(const ScavTrap& scavtrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
        void getInfo();
};

#endif
