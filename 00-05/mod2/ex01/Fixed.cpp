#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>


Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destroctur called for Fixed value: " << this->_value << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

// To convert int to fixed-point -> we shift left by _fractionalBits
Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_fractionalBits;
}

/*
Converting float to fixed point:
	1. we multiply by 2^frationalBits to shift decimal point to right
	2. rount to nearest integerat (there is danger of truncation erros if we don't do it)
example:
	5.5 becomes round(5.5 * 256) = 1408
*/
Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
	{
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


//Converting to float -> we dived by 2^fractionalBits to shift right
float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << _fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const
{
    return this->_value >> _fractionalBits;
}

// Stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
