#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>


Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
}

// To convert int to fixed-point -> we shift left by _fractionalBits
Fixed::Fixed(const int n)
{
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
    this->_value = roundf(n * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
	{
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

int	Fixed::getRawBits(void) const
{
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

/*
===========================
Comparsion operators:
*/ 

bool    Fixed::operator>( const Fixed &rhs ) const {
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator<( const Fixed &rhs ) const {
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator>=( const Fixed &rhs ) const {
    return this->getRawBits() >= rhs.getRawBits();
}

bool   Fixed::operator<=( const Fixed &rhs ) const {
    return this->getRawBits() <= rhs.getRawBits();
}

bool  Fixed::operator==( const Fixed &rhs ) const {
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator!=( const Fixed &rhs ) const {
    return this->getRawBits() != rhs.getRawBits();
}

/*
===========================
Arithmetic operators:
*/ 

Fixed   Fixed::operator+( const Fixed &rhs ) const {
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &rhs ) const {
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &rhs ) const {
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &rhs ) const {
    return Fixed( this->toFloat() / rhs.toFloat() );
}

/*
===========================
Increment/decrement operators:
*/ 

Fixed&   Fixed::operator++( void ) {
    ++this->_value;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_value;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value--;
    return tmp;
}

//----------------------- Max and Min ----------------------//

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}
