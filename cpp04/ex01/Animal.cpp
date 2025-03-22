/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:40:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:25:12 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &_a )
{
    *this = _a;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator = ( const Animal &_a )
{
    _type = _a._type;
    std::cout << "Animal copy assignment operator" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal is destructed" << std::endl;
}

void	Animal::makeSound( ) const
{
    std::cout << "not working" << std::endl;
}

std::string		Animal::getType() const
{
    return (_type);
}