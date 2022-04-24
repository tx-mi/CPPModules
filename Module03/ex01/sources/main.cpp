#include "ScavTrap.hpp"

int main()
{
	ScavTrap dude("archi");
	std::cout << std::endl;

	ScavTrap check("hi");
	std::cout << std::endl;

	dude.takeDamage(3);

	check = dude;
	std::cout << std::endl;

	check.getInfo();
	std::cout << std::endl;


	dude.getInfo();
	std::cout << std::endl;

	dude.attack("zaraza");
	std::cout << std::endl;

	dude.guardGate();
	std::cout << std::endl;
}
