/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:31:06 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 19:49:20 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	std::string filterLevel;
	int			nb_of_calls = 0;

public:
	void complain( std::string level );
	void setFilter( std::string level );
};


#endif