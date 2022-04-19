#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "\nI really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			<< "You didn't put enough bacon in my burger!"
			<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< "I've been coming for years whereas you started "
			<< "working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	const std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	void (Harl::*funcs[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; !names[i].empty(); i++)
		if (!level.compare(names[i]))
			(this->*funcs[i])();
}
