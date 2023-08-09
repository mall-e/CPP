#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
    int raw;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const Fixed& cpy);
    ~Fixed();

    Fixed& operator=(const Fixed& ref);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif