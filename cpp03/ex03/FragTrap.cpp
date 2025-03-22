/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 02:09:22 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:41:16 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Default")
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "The default FragTrap has been created !" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "The FragTrap " << this->_name << " has been created !" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "The FragTrap " << this->_name << " has been blown up to ashes." << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "The FragTrap " << this->_name << " wants to do a high five. high five? HIGH FIVE!" << std::endl;
}