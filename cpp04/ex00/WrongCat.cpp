/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:56:27 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:56:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
    std::cout << "WrongMeow" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat is destructed" << std::endl;
}
