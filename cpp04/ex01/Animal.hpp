/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:35:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:25:07 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal( const Animal & );
        virtual ~Animal();
        Animal	&operator = ( const Animal & );
        virtual	void makeSound() const;
        std::string getType() const;
};

#endif