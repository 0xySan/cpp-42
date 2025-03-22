/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:35:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 16:49:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal( void );
        ~Animal( void );
        virtual void makeSound() const;
        std::string getType( void ) const;
};