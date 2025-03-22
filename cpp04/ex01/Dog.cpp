/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:48:13 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    this->_brain = new Brain();
    this->_type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
    if (this != &other)
    {
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "Dog copy assignment operator" << std::endl;
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "Bark" << std::endl;
}

Dog::~Dog( void )
{
    delete this->_brain;
    std::cout << "Dog is destructed" << std::endl;
}

void Dog::setIdea(std::string idea, int index)
{
    this->_brain->_ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
    return (this->_brain->_ideas[index]);
}
