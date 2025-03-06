/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:45:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 18:03:48 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int PhoneBook::SEARCH(void)
{
    int search;
    std::cout << "     INDEX|     LNAME|     FNAME|  NICKNAME|" << std::endl;
    for (int i = 0; i < index && i < 8; i++)
    {
        std::cout << std::setw(10) << i % 8 << "|";
        if (contacts[i].getFirstName().length() > 10)
            std::cout << contacts[i].getFirstName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
        if (contacts[i].getLastName().length() > 10)
            std::cout << contacts[i].getLastName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contacts[i].getLastName() << "|";
        if (contacts[i].getNickname().length() > 10)
            std::cout << contacts[i].getNickname().substr(0, 9) << ".|" << std::endl;
        else
            std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;
    }
    std::cout << "TYPE THE INDEX OF THE NUMBER YOU WANNA SHOW ";
    std::cin >> search;
    if (std::cin.fail())
    {
        std::cout << "ERROR -- You did not enter an integer." << std::endl;
        std::cin.clear();
        return 1;
    }
    if (search < index)
        std::cout << std::setw(17) << "FIRST NAME : "  << contacts[search].getFirstName() << std::endl << std::setw(17) << "LAST NAME : "  << contacts[search].getLastName() << std::endl << std::setw(17) << "NICKNAME : "  << contacts[search].getNickname() << std::endl << std::setw(17) << "PHONE NUMBER : "  << contacts[search].getPhoneNumber() << std::endl << std::setw(17) << "DARKEST SECRET : "  << contacts[search].getDarkestSecret() << std::endl;
    else
        std::cout << "ERROR -- Index out of range." << std::endl;
    return 0;
}