/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:45:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:30 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat( void );
        Cat( const Cat& other );
        Cat& operator=( const Cat& other );
        ~Cat( void );
        void makeSound( void ) const;
        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
    private:
        Brain *_brain;
};

#endif