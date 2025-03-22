/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:56:57 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:57:28 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Unknow WrongAnimal")
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
    std::cout << "*Sound of an undiscovered WrongAnimal*" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal is destructed" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}