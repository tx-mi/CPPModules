#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(const Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack(void) {
    if (this->_weapon)
        std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << "weapon is NULL" << std::endl;
}
