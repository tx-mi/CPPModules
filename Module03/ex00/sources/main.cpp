#include "ClapTrap.hpp"

int main(void) {
    ClapTrap dude;

    for (int i = 0; i < 8; i++) {
        if (!dude.isAlive())
            break;
        dude.takeDamage(1);
    }
    dude.beRepaired(4);
    dude.attack("mem");
    return (0);
}
