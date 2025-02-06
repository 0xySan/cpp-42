/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:42:26 by etaquet           #+#    #+#             */
/*   Updated: 2025/02/06 04:47:17 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int PhoneBook::ADD(void)
{
	if (index == 8)
		index = 0;
	std::cout << "ADDING NEW NUMBER..." << std::endl;
	std::string values[5];
	std::cout << "PLEASE ENTER THE FIRST NAME" << std::endl;
	readInput(values[0]);
	contacts[index].setFirstName(values[0]);
	std::cout << "PLEASE ENTER THE LAST NAME" << std::endl;
	readInput(values[1]);
	contacts[index].setLastName(values[1]);
	std::cout << "PLEASE ENTER THE NICKNAME" << std::endl;
	readInput(values[2]);
	contacts[index].setNickname(values[2]);
	std::cout << "PLEASE ENTER THE PHONE NUMBER" << std::endl;
	readInput(values[3]);
	contacts[index].setPhoneNumber(values[3]);
	std::cout << "PLEASE ENTER THE DARKEST SECRET" << std::endl;
	readInput(values[4]);
	contacts[index].setDarkestSecret(values[4]);
	index++;
	std::cout << "...NEW NUMBER ADDED" << std::endl;
	return (0);
}