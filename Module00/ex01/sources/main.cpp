#include "PhoneBook.hpp"

int main(void) {
	PhoneBook phonebook;
	std::string input;
	int index = 0;

	while (1) {
		std::cout << ">";
		std::getline(std::cin, input);

		if (input == "EXIT") {
			return (0);
		} else if (input == "SEARCH") {
			phonebook.search();
		} else if (input == "ADD") {
			phonebook.add(index);
			index++;
			if (index == 8) {
				index = 0;
			}
		}
	}
	return (0);
}
