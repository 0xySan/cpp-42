/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:15:54 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:47:32 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name (name), _weapon (weapon)
{
    return ;
}

HumanA::~HumanA( void )
{
    return ;
}

void HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}