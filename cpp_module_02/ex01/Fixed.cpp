#include "Fixed.hpp"

Fixed::Fixed() {
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int val) {
    std::cout << "Int constructor called" << std::endl;
    raw = val * (1 << bit);
}

Fixed::Fixed(const float val) {
    std::cout << "Float constructor called" << std::endl;
    raw = roundf(val * (1 << bit));
}

Fixed& Fixed::operator=(const Fixed& ref){
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = ref.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& cs){
    os << cs.toFloat();
    return (os);
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits called" << std::endl;
    this->raw = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)raw / (float)(1 << bit));
}

int     Fixed::toInt(void) const {
    return (raw / (1 << bit));
}