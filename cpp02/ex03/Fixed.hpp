/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:04:23 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 00:43:56 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Point.hpp"

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed &operator=(const Fixed &copy);
        Fixed operator+(const Fixed &copy) const;
        Fixed operator-(const Fixed &copy) const;
        Fixed operator*(const Fixed &copy) const;
        Fixed operator/(const Fixed &copy) const;
        bool operator>(const Fixed &copy) const;
        bool operator<(const Fixed &copy) const;
        bool operator>=(const Fixed &copy) const;
        bool operator<=(const Fixed &copy) const;
        bool operator==(const Fixed &copy) const;
        bool operator!=(const Fixed &copy) const;
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
    private:
        int _value;
        static const int _bits = 8;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);