/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:40 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:20 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain is destructed" << std::endl;
}

Brain::Brain( const Brain &_b )
{
    *this = _b;
    std::cout << "Brain copy constructor" << std::endl;
}

Brain	&Brain::operator = ( const Brain &_b )
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = _b._ideas[i];
    std::cout << "Brain copy assignment operator" << std::endl;
    return (*this);
}
