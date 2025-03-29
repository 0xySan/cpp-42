/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:04:23 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/26 20:13:01 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed &operator=(const Fixed &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
    private:
        int _value;
        static const int _bits = 8;
};