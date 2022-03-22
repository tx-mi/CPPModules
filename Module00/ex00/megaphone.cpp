#include <iostream>

int main(int argc, char **argv) {

	if (argc > 1) {
		for (int i = 1; argv[i]; i++) {
			for (int j = 0; argv[i][j]; j++) {
				std::cout << (char)toupper(argv[i][j]);
			}
		}
		std::cout << "\n";
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}