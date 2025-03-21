/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:39:12 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 19:08:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("unknown");
}
