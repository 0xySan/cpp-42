/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 03:08:54 by etaquet           #+#    #+#             */
/*   Updated: 2025/05/05 03:20:28 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int size ) : _size(size) { }

Span::Span( const Span &src ) { *this = src; }

Span &Span::operator=( const Span &src )
{
	if (this != &src)
	{
		this->_size = src._size;
		this->_numbers = src._numbers;
	}
	return *this;
}

Span::~Span( void ) { }

void Span::addNumber( int number )
{
	if (this->_numbers.size() >= this->_size)
		throw std::out_of_range("Span is full");
	this->_numbers.push_back(number);
}

void Span::addNumber( std::list<int>::iterator begin, std::list<int>::iterator end )
{
	if (std::distance(begin, end) > static_cast<long>(this->_size))
		throw std::out_of_range("Span is full");
	this->_numbers.insert(this->_numbers.end(), begin, end);
}

unsigned int Span::shortestSpan( void ) const
{
	if ( _numbers.size() < 2 )
		throw std::out_of_range("Span::shortestSpan: list is empty");
	unsigned int  min = Span::longestSpan();
	for ( std::list<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it ) {
		for ( std::list<int>::const_iterator it2 = _numbers.begin(); it2 != _numbers.end(); ++it2 ) {
			if ( it == it2 ) continue;
			if ( std::abs( *it2 - *it ) <  static_cast< int >( min ) )
				min = std::abs( *it2 - *it );
		}
	}
	return min;
}

unsigned int Span::longestSpan( void ) const
{
	if ( _numbers.size() < 2 )
		throw std::out_of_range("Span::longestSpan: list is empty");
	return ( *std::max_element( _numbers.begin(), _numbers.end() ) - *std::min_element( _numbers.begin(), _numbers.end() ) );
}

const std::list<int>* Span::getList( void ) const { return &this->_numbers; }

std::ostream & operator<<(std::ostream &os, const Span &span)
{
	os << "Span: ";
	for (std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it)
		os << *it << " ";
	return os;
}
