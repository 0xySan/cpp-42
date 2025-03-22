/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:12:37 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:13:48 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    ScavTrap Robert("Robert");
    ClapTrap Jeannine("Jeannine");
    FragTrap Jean_Luc("Jean_Luc");

    Robert.beRepaired(23);
    Robert.attack("Jeannine");

    Jeannine.takeDamage(20);
    Jeannine.beRepaired(1);
    Robert.guardGate();

    Jean_Luc.highFivesGuys();
}