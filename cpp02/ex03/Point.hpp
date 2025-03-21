/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:41:04 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 00:41:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Point
{
    public:
        Point();
        Point(const Point &copy);
        Point(const float x, const float y);
        ~Point();
        Point &operator=(const Point &copy);
        float getX(void) const;
        float getY(void) const;
    private:
        float _x;
        float _y;
};