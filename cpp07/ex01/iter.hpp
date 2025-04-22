/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:15 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 16:46:23 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename TS, typename TF>
void iter(TS *array, size_t length, void (*f)(TF &))
{
	if (!array || !length || !f)
		return ;
	for (size_t i = 0; i < length; ++i)
		f(array[i]);
}

#endif