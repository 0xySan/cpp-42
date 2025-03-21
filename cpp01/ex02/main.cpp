/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:10:19 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 17:10:22 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str	= "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory addres of str: " << &str << std::endl;
	std::cout << "Memory addres of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory addres of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}