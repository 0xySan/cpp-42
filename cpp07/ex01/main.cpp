/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 16:49:57 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void display(T& elem)
{
	std::cout << "elem is: " << elem << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	iter(array, length, static_cast<void(*)(int&)>(display));

	const std::string strArray[] = {"Hello", "World", "!"};
	length = sizeof(strArray) / sizeof(strArray[0]);

	iter(strArray, length, static_cast<void(*)(const std::string&)>(display));

	return 0;
}