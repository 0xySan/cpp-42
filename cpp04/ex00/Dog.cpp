/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:48:13 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:52:29 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

void	Dog::makeSound( void ) const
{
    std::cout << "Bark" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "Dog is destructed" << std::endl;
}
