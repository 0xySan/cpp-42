/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:15 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 17:00:37 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &srcs);
		~Array();
		Array &operator=(Array const &objs);

		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;

		unsigned int size() const;

		class OutOfLimitsException : public std::exception
		{
			public:
				const char *what() const noexcept override
				{
					return ("Out of limits");
				};
		};

};

template <typename T>
std::ostream&	operator<<(std::ostream& out, const Array<T>& array);

#include "Array.tpp"

#endif