/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:14:28 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:48:21 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
        Weapon *_weapon;
	public:
        HumanB( std::string name );
        ~HumanB( void );
        void attack( void );
        void setWeapon ( Weapon &weapon);
};