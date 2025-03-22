/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:00:15 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:00:00 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << this->_name << " has been created !" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap " << this->_name << " has been crushed into pieces of metal." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " is already dead.. RIP." << std::endl;
    else if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no more energy to attack...." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " cannot be damaged anymore has he his already dead.." << std::endl;
    else
    {
        this->_hit_points -= amount;
        if (this->_hit_points <= 0)
        {
            this->_hit_points = 0;
            std::cout << "ClapTrap " << this->_name << " took " << amount << " damages and is now dead" << std::endl;
        }
        else
            std::cout << "ClapTrap " << this->_name << " took " << amount << " damages and is now at " << this->_hit_points << " hp !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " cannot be repaired anymore has he is already dead.." << std::endl;
    else if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " has no more energy to be repaired...." << std::endl;
    else
    {
        this->_hit_points += amount;
        std::cout << "ClapTrap " << this->_name << " has been repaired of " << amount << " hp and is now at " << this->_hit_points << " !" << std::endl;
    }
}