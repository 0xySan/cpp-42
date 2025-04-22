/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:05:51 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 15:07:30 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b) 
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>T min(T &a, T &b) { return (a >= b ? b : a); }

template<typename T> T max (T &a, T &b) { return (a <= b ? b : a); }

#endif