#include "Fixed.hpp"

Fixed::Fixed(): value(0) {}

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
