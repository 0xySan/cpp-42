/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:39:12 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 19:44:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av )
{
    if (ac != 2)
    {
        std::cout << "Usage: " << av[0] << " <filter_level>" << std::endl;
        return 1;
    }
    
    Harl harl;

    harl.setFilter(av[1]);
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("unknown");
}
