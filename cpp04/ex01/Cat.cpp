/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:43:03 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:39 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    _brain = new Brain();
    this->_type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
    if (this != &other)
    {
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "Cat copy assignment operator" << std::endl;
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat( void )
{
    delete _brain;
    std::cout << "Cat is destructed" << std::endl;
}

void Cat::setIdea(std::string idea, int index)
{
    _brain->_ideas[index] = idea;
}

std::string Cat::getIdea(int index) const
{
    return (_brain->_ideas[index]);
}
