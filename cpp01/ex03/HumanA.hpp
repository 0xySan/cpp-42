/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:10:11 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:47:09 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
	public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );
        void attack( void );
	private:
		std::string _name;
        Weapon &_weapon;
};