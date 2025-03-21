/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:39:38 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:00:02 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void)
{
	std::cout << this->name << " DieeeeeeeeddD...." << std::endl;
}

void Zombie::set_name( std::string name )
{
	this->name = name;
}

void Zombie::announce( void )
{
     std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}
