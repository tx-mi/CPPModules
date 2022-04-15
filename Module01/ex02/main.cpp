#include <iostream>

int	main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "address str: " << &str << "\n";
    std::cout << "address stringPTR: " << stringPTR << "\n";
    std::cout << "address stringREF: " << &stringREF << "\n";

    std::cout << "value str: " << str << "\n";
    std::cout << "value stringPTR: " << *stringPTR << "\n";
    std::cout << "value stringREF: " << stringREF << "\n";

    return 0;
}
