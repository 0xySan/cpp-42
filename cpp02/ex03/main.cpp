/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:03:49 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/29 04:17:10 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{

    std::cout << bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15)) << std::endl;
    
    return 0;
}