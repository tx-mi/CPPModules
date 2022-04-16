#include "Harl.hpp"

int main(void) {
	Harl Harl;

	std:: cout << "DEBUG\n";
	Harl.complain("DEBUG");

	std:: cout << "INFO\n";
	Harl.complain("INFO");

	std:: cout << "WARNING\n";
	Harl.complain("WARNING");

	std:: cout << "ERROR\n";
	Harl.complain("ERROR");
	return 0;
}
