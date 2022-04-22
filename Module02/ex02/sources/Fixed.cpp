#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(int num): _value(num << _fractional_bits) { }

Fixed::Fixed(float num): _value(roundf(num * (1 << _fractional_bits))) { }

Fixed::Fixed(const Fixed &obj) {
    _value = obj.getRawBits();
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &obj) {
    _value = obj.getRawBits();
    return *this;
}

// conditional
bool Fixed::operator==(const Fixed &obj) const {
    return _value == obj._value;
}

bool Fixed::operator!=(const Fixed &obj) const {
    return _value != obj._value;
}

bool Fixed::operator>=(const Fixed &obj) const {
    return _value >= obj._value;
}

bool Fixed::operator<=(const Fixed &obj) const {
    return _value <= obj._value;
}

bool Fixed::operator>(const Fixed &obj) const {
    return _value > obj._value;
}

bool Fixed::operator<(const Fixed &obj) const {
    return _value < obj._value;
}
// end_conditional

Fixed& Fixed::operator+=(const Fixed &obj) {
    _value += obj._value;

    return *this;
}

Fixed& Fixed::operator-=(const Fixed &obj) {
    _value -= obj._value;

    return *this;
}

Fixed& Fixed::operator*=(const Fixed &obj) {
    _value *= obj._value;

    return *this;
}

Fixed& Fixed::operator/=(const Fixed &obj) {
    _value /= obj._value;

    return *this;
}

Fixed Fixed::operator+(const Fixed &obj) const {
    Fixed ret(*this);

    ret._value = ret._value + obj._value;
    return ret;
}

Fixed Fixed::operator-(const Fixed &obj) const {
    Fixed ret(*this);

    ret._value = ret._value - obj._value;
    return ret;
}

Fixed Fixed::operator*(const Fixed &obj) const {
    Fixed ret(*this);

    ret._value = ret._value * obj._value;
    return ret;
}

Fixed Fixed::operator/(const Fixed &obj) const {
    Fixed ret(*this);

    ret._value = ret._value / obj._value;
    return ret;
}

Fixed& Fixed::operator++() {
    ++_value;

    return *this;
}

Fixed& Fixed::operator--() {
    ++_value;

    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);

    ++*this;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);

    --*this;
    return temp;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

int Fixed::toInt(void) const {
    return (_value >> _fractional_bits);
}

float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractional_bits);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return a > b ? a: b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return a < b ? a: b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return a > b ? a: b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return a < b ? a: b;
}

std::ostream& operator<<(std::ostream &stream, const Fixed &obj) {
    stream << obj.toFloat();
    return stream;
}
