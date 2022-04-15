#include "Zombie.hpp"
#include <iostream>

int main(int argc, char **argv) {
    Zombie* horde;

    if (argc != 2)
        return (1);
    horde = zombieHorde(10, argv[1]);
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    std::cout << std::endl;
    delete[] horde;
}
