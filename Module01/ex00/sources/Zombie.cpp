#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << this->_name << " is gone!\n";
}

void Zombie::announce( void ) {
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
