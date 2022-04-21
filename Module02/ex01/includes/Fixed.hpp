#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int value;
        static const int fractional_bits=8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(int value);
        Fixed(float value);
        ~Fixed();

        Fixed& operator=(const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed &obj);

#endif
