/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:42:26 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 16:36:57 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int PhoneBook::ADD(void)
{
	std::cout << "ADDING NEW NUMBER..." << std::endl;
	std::string values[5];
	std::cout << "PLEASE ENTER THE FIRST NAME" << std::endl;
	readInput(values[0]);
	this->contacts[index % 8].setFirstName(values[0]);
	std::cout << "PLEASE ENTER THE LAST NAME" << std::endl;
	readInput(values[1]);
	this->contacts[index % 8].setLastName(values[1]);
	std::cout << "PLEASE ENTER THE NICKNAME" << std::endl;
	readInput(values[2]);
	this->contacts[index % 8].setNickname(values[2]);
	std::cout << "PLEASE ENTER THE PHONE NUMBER" << std::endl;
	readInput(values[3]);
	this->contacts[index % 8].setPhoneNumber(values[3]);
	std::cout << "PLEASE ENTER THE DARKEST SECRET" << std::endl;
	readInput(values[4]);
	this->contacts[index % 8].setDarkestSecret(values[4]);
	index++;
	std::cout << "...NEW NUMBER ADDED" << std::endl;
	return (0);
}