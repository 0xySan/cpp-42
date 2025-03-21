/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:42:51 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 00:47:00 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// cross = x1 * y2 - y1 * x2
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed tmp = Fixed((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX()));
    Fixed tmp2 = Fixed((c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX()));
    Fixed tmp3 = Fixed((a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX()));
    return (tmp >= 0 && tmp2 >= 0 && tmp3 >= 0) || (tmp <= 0 && tmp2 <= 0 && tmp3 <= 0);
}