#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
    std::cout << "ScavTrap " << _name << " created\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj) {
    std::cout << "Scavtrap " << _name << " (copy)created\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "Scavtrap " << _name << " created\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name  << " have enterred"
          << " in Gate keeper mode\n";
}

void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << _name   << " attack "
            << target << ", causing " << _attackDamage << " points of damage!\n";
}

void ScavTrap::getInfo(void) {
    std::cout << "SCAVTRAP " << this->_name << " INFO\n"
            << "HITPOINTS: " << this->_hitPoints << "\n"
            << "ENERGY POINTS: " << this->_energyPoints<< "\n"
            << "ATTACK DAMAGE: " << this->_attackDamage << "\n";
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << _name  << " is gone!\n";
}
