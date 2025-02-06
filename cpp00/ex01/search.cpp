/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:45:41 by etaquet           #+#    #+#             */
/*   Updated: 2025/02/06 04:55:30 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int PhoneBook::SEARCH(void)
{
    std::cout << "INDEX     |LNAME     |FNAME     |NICKNAME  " << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << contacts[i].getFirstName();
    }
    return 0;
}