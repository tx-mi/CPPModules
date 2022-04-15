#include "Zombie.hpp"

int main(void) {
    Zombie *z_heap = newZombie("kilua");
	Zombie z_stack("gon");
	randomChump("bob");

	z_heap->announce();
	z_stack.announce();
	delete z_heap;
}
