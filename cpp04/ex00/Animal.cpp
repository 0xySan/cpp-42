/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:40:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:54:06 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Unknow Animal")
{
    std::cout << "Animal default constructor" << std::endl;
}

void	Animal::makeSound( void ) const
{
    std::cout << "*Sound of an undiscovered animal*" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal is destructed" << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->_type;
}