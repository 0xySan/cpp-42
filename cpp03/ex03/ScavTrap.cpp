/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:27:18 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:44:19 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("default"), _isGateOpen(true)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "The default ScavTrap has been created !" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name), _isGateOpen(true)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "The ScavTrap of " << this->_name << " has been created !" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "The ScavTrap of " << this->_name << " has been crushed into scrap." << std::endl;
}

void ScavTrap::guardGate()
{
    if (_isGateOpen)
    {
        std::cout << "The gate of the ScavTrap of  " << this->_name << " was opened but is now closed." << std::endl;
        _isGateOpen = false;
    }
    else
    {
        std::cout << "The gate of the ScavTrap of " << this->_name << " was already closed, he is still guarding it." << std::endl;
    }
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points == 0)
        std::cout << "The ScavTrap of " << this->_name << " is already dead.. RIP." << std::endl;
    else if (this->_energy_points == 0)
        std::cout << "The ScavTrap of " << this->_name << " has no more energy to attack...." << std::endl;
    else
    {
        std::cout << "The ScavTrap of " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
    }
}
