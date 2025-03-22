/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 02:23:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:44:14 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string new_name ) : ClapTrap(new_name + "_clap_name")
{
    this->_name = new_name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap " << this->_name << " has been created !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " has been turned into a beautiful ring." << std::endl;
}

void	DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << this->_name << std::endl;
    std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
}

