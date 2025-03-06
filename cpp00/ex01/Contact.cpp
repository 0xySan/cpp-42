/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:24:37 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 18:11:35 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(void)
{
	return (this->f_name);
}

std::string	Contact::getLastName(void)
{
	return (this->l_name);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->pnumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->secret);
}

void	Contact::setFirstName(std::string newFirstName)
{
	this->f_name = newFirstName;
}

void	Contact::setLastName(std::string newLastName)
{
	this->l_name = newLastName;
}

void	Contact::setNickname(std::string newNickname)
{
	this->nickname = newNickname;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber)
{
	this->pnumber = newPhoneNumber;
}

void	Contact::setDarkestSecret(std::string newDarkestSecret)
{
	this->secret = newDarkestSecret;
}