/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:12:37 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 01:44:50 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap Robert("Robert");
    ClapTrap Jeannine("Jeannine");

    Robert.beRepaired(23);
    Robert.attack("Jeannine");

    Jeannine.takeDamage(0);
    Jeannine.beRepaired(1);
}