/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:42:21 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 00:42:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    return ;
}

Point::Point(const Point &copy)
{
    *this = copy;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    return ;
}

Point::~Point()
{
    return ;
}

Point &Point::operator=(const Point &copy)
{
    if (this != &copy)
    {
        this->_x = copy.getX();
        this->_y = copy.getY();
    }
    return *this;
}

float Point::getX(void) const
{
    return this->_x;
}

float Point::getY(void) const
{
    return this->_y;
}
