/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 01:23:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:25:34 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        ~ScavTrap( void );
        void guardGate();
        void attack(const std::string& target);
    protected:
        bool _isGateOpen;
};