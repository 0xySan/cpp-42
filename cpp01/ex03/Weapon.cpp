/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:17:47 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:20:11 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

void Weapon::setType( std::string type )
{
    this->type = type;
}

std::string Weapon::getType( void )
{
    return (this->type);
}