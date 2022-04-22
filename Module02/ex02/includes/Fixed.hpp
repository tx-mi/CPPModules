#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _value;
        static const int _fractional_bits=8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(int value);
        Fixed(float value);
        ~Fixed();

        Fixed& operator=(const Fixed &obj);

        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator>(const Fixed &obj) const;
        bool operator<(const Fixed &obj) const;

        Fixed& operator+=(const Fixed &obj);
        Fixed& operator-=(const Fixed &obj);
        Fixed& operator*=(const Fixed &obj);
        Fixed& operator/=(const Fixed &obj);

        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;

        Fixed& operator++(void);
        Fixed& operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream& operator<<(std::ostream& stream, const Fixed &obj);

#endif
