/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:15:44 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:51:19 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name (name), _weapon (NULL)
{
    return ;
}

HumanB::~HumanB( void )
{
    return ;
}

void HumanB::attack( void )
{
    if (!_weapon)
        std::cout << this->_name << " doesn't have any weapon :(" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon ( Weapon &weapon)
{
    _weapon = &weapon;
}