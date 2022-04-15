#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *z_arr = new Zombie[N];

    for (int i = 0; i < N; i++) {
        z_arr[i].setName(name);
    }
    return z_arr;
}

