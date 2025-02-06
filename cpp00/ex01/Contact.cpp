/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:24:37 by etaquet           #+#    #+#             */
/*   Updated: 2025/02/06 04:28:18 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName(void)
{
    return (f_name);
}

std::string Contact::getLastName(void)
{
    return (l_name);
}

std::string Contact::getNickname(void)
{
    return (nickname);
}

std::string Contact::getPhoneNumber(void)
{
    return (pnumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (secret);
}

void Contact::setFirstName(std::string newFirstName)
{
    f_name = newFirstName;
}

void Contact::setLastName(std::string newLastName)
{
    l_name = newLastName;
}

void Contact::setNickname(std::string newNickname)
{
    nickname = newNickname;
}

void Contact::setPhoneNumber(std::string newPhoneNumber)
{
    pnumber = newPhoneNumber;
}

void Contact::setDarkestSecret(std::string newDarkestSecret)
{
    secret = newDarkestSecret;
}