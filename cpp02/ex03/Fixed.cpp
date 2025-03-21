/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:05:27 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 00:31:27 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    return ;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed::Fixed(const int value)
{
    this->_value = value << this->_bits;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value * (1 << this->_bits));
}

Fixed::~Fixed()
{
    return ;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        this->_value = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_bits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

Fixed Fixed::operator+(const Fixed &copy) const
{
    return Fixed(this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy) const
{
    return Fixed(this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy) const
{
    return Fixed(this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy) const
{
    return Fixed(this->toFloat() / copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
    return this->toFloat() > copy.toFloat();
}

bool Fixed::operator<(const Fixed &copy) const
{
    return this->toFloat() < copy.toFloat();
}

bool Fixed::operator>=(const Fixed &copy) const
{
    return this->toFloat() >= copy.toFloat();
}

bool Fixed::operator<=(const Fixed &copy) const
{
    return this->toFloat() <= copy.toFloat();
}

bool Fixed::operator==(const Fixed &copy) const
{
    return this->toFloat() == copy.toFloat();
}

bool Fixed::operator!=(const Fixed &copy) const
{
    return this->toFloat() != copy.toFloat();
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}
