/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:15 by etaquet           #+#    #+#             */
/*   Updated: 2025/05/05 03:19:31 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>
#include <limits.h>
#include <algorithm>

class Span
{
	private:
		unsigned int _size;
		std::list<int> _numbers;
	public:
		Span( unsigned int );
		Span( const Span & );
		Span &operator=( const Span & );
		~Span( void );

		void addNumber( int );
		void addNumber( std::list<int>::iterator, std::list<int>::iterator );
		unsigned int shortestSpan( void ) const;
		unsigned int longestSpan( void ) const;
		const std::list<int>* getList( void ) const;
};

std::ostream & operator<<(std::ostream&, const Span& );

#endif