#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
    _name("dude"),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0) {
        std::cout << "object of ClapTrap is created!\n";
    }

ClapTrap::ClapTrap(std::string name):
    _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0) {
        std::cout << "ClapTrap " << name << " is created!\n";
    }

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
	this->operator=(claptrap);
	std::cout << "ClapTrap " << _name << " copied and created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " is gone!\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
	_name = claptrap._name;
	_hitPoints = claptrap._hitPoints;
	_energyPoints = claptrap._energyPoints;
	_attackDamage = claptrap._attackDamage;

	return *this;
}

bool ClapTrap::isAlive(void) const {
    return _hitPoints > 0;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0) {
        _energyPoints--;

        std::cout << "ClapTrap " << _name << " attacks " << target
                << ", causing " << _attackDamage << " points of damage!\n";
    } else {
        std::cout << _name << ": hasn't eneregy points:(\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0) {
        _energyPoints--;
        _hitPoints += amount;

        std::cout << "ClapTrap " << _name << " be repaired for " << amount
                << ", now he has " << _hitPoints << " hit points\n";
    } else {
        std::cout << _name << ": hasn't eneregy points:(\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;

    std::cout << "ClapTrap " << _name << " take damage " << amount
            << ", now he has " << _hitPoints << " hit points\n";
}
