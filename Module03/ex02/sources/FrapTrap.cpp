#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap) {
    std::cout << "FragTrap " << _name << " created (copy operation)!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
    ClapTrap::operator=(fragtrap);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
    std::cout << "HELOOOO" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name
                << " attacks " << target
                << ", causing "<< _attackDamage
                << " points of damage! " << _energyPoints
                << " energy points remains." << std::endl;
    }
    else
        std::cout << "Not enough energy points!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    std::cout << "FragTrap " << _name
            << " recieved " << amount
            << " points of damage!" << std::endl
            << "hit " << _hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "FragTrap " << _name
                << " has repaired himself! " << _energyPoints
                << " energy points remains." << std::endl;
    }
    else
        std::cout << "Not enough energy points!" << std::endl;
}
