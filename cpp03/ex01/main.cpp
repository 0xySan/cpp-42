/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:12:37 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 01:58:00 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap Robert("Robert");
    ClapTrap Jeannine("Jeannine");

    Robert.beRepaired(23);
    Robert.attack("Jeannine");

    Jeannine.takeDamage(20);
    Jeannine.beRepaired(1);
    Robert.guardGate();
}