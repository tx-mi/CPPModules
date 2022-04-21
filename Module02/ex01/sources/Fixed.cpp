#include "Fixed.hpp"

Fixed::Fixed(): value(0) {}

Fixed::Fixed(int value) {
    this->value = value << fractional_bits;
}

Fixed::Fixed(float value) {
    this->value = roundf(value * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &obj) {
    this->value = obj.getRawBits();
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &obj) {
    value = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

int Fixed::toInt(void) const {
    return (value >> fractional_bits);
}

float Fixed::toFloat(void) const {
    return ((float)value / (1 << fractional_bits));
}

std::ostream& operator<<(std::ostream &stream, const Fixed &obj) {
    stream << obj.toFloat();
    return stream;
}
