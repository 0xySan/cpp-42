/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:34:30 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 16:44:50 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
        Zombie( std::string name );
	    ~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );