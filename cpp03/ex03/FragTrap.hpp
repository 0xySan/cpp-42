/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 02:07:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 02:26:52 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap( void );
        FragTrap(std::string name);
        ~FragTrap( void );
        void highFivesGuys(void);
};