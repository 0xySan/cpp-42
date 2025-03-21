/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:39:38 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 16:46:07 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void)
{
	std::cout << this->name << " DieeeeeeeeddD...." << std::endl;
}

void Zombie::announce( void )
{
        std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}
