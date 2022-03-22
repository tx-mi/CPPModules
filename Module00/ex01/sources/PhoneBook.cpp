#include "PhoneBook.hpp"

void PhoneBook::search() {
	std::string index;

	while (1) {
		std::cout << "index: ";
		std::cin >> index;
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7') {
			break ;
		} else {
			std::cout << "Error: Wrong index" << std::endl;
		}
	}
	_contacts[index[0] - '0'].printContact();
}

void PhoneBook::add(int index) {
	std::string input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	_contacts[index].setFirstName(input);

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	_contacts[index].setLastName(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	_contacts[index].setNickname(input);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	_contacts[index].setDarksetSecret(input);

	std::cout << "Phonenumber: ";
	std::getline(std::cin, input);
	_contacts[index].setPhonenumber(input);
}
