#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        const Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();

        void attack(void);
        void setWeapon(const Weapon &weapon);
};

#endif
