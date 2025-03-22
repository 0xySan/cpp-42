/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 02:23:36 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:37:38 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class			DiamondTrap : public FragTrap, public ScavTrap
{
    private:
		std::string				_name;
    public:
		DiamondTrap( std::string );
		~DiamondTrap();
		void whoAmI();
};
