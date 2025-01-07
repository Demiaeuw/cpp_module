/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:15:40 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/07 14:47:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeur par défaut
Fixed::Fixed() : _fixedPointValue(0)
{}

// Constructeur prenant un entier
Fixed::Fixed(const int value)
{
    _fixedPointValue = value << _fractionalBits;
}

// Constructeur prenant un flottant
Fixed::Fixed(const float value)
{
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

// Constructeur de recopie
Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

// Destructeur
Fixed::~Fixed()
{}

// Opérateur d’affectation
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other) {
        _fixedPointValue = other.getRawBits();
    }
    return *this;
}
int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}


// Surcharges des opérateurs de comparaison
bool Fixed::operator>(const Fixed &other) const
{
    return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->_fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->_fixedPointValue != other._fixedPointValue;
}

// Surcharges des opérateurs arithmétiques
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    if (other._fixedPointValue == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Surcharges des opérateurs d’incrémentation/décrémentation
Fixed &Fixed::operator++()
{
    ++this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed &Fixed::operator--()
{
    --this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

// Fonctions membres statiques
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
