/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:43:03 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:52:50 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

void	Cat::makeSound( void ) const
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Cat is destructed" << std::endl;
}
