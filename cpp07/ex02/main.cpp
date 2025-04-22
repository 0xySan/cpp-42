/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 17:03:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 2;
    std::cout << "intArray: " << intArray << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i)
        intArray[i] = intArray[i] * intArray[i];
    std::cout << "intArray: " << intArray << std::endl;
    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";

    std::cout << "strArray: " << strArray << std::endl;

    try
    {
        std::cout << "Accessing out of bounds: " << intArray[10] << std::endl;
    }
    catch (const Array<int>::OutOfLimitsException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}