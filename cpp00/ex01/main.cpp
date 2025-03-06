/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:35:20 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 18:09:03 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) : index(0) {}

void readInput(std::string &input)
{
	while (input.compare("") == 0)
		std::cin >> input;
}

void	PhoneBook::executeall(std::string str)
{
	if (str.compare("ADD") == 0)
		ADD();
	if (str.compare("SEARCH") == 0)
		SEARCH();
	else if (str.compare("EXIT") == 0)
		exit(0);
}

int	main(int argc, char **argv)
{
	PhoneBook pb;

	std::cout << "WELCOME TO THE CRAPPY PHONEBOOK MUSEUM! HERE YOU CAN DO 3 THINGS:\nADD: save a new contact\nSEARCH: display a specific contact\nEXIT: exit the program!\nWHAT DO YOU WANT TO DO NOW?\n";
	std::string mot;
	while (1)
	{
		std::cin >> mot;
		pb.executeall(mot);
	}
	return (0);
}