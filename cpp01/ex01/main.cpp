/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:37:00 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:03:53 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies = zombieHorde(42, "Alex");
    for (int i = 0; i < 42; i++ )
        Zombies->announce();
    delete[] Zombies;
}