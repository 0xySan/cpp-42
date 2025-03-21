/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:34:30 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:02:22 by etaquet          ###   ########.fr       */
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
	    ~Zombie( void );
		void set_name( std::string name );
};

Zombie* zombieHorde( int N, std::string name );