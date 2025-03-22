/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:47:54 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:48 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog( void );
        Dog( const Dog& other );
        Dog& operator=( const Dog& other );
        ~Dog( void );
        void makeSound( void ) const;
        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
    private:
        Brain *_brain;
};

#endif