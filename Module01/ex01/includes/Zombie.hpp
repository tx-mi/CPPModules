#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);

    private:
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
#endif
