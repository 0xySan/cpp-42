/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:42:35 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 18:11:13 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string pnumber;
		std::string secret;
	public:
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

		void	setFirstName(std::string newFirstName);
		void	setLastName(std::string newLastName);
		void	setNickname(std::string newNickname);
		void	setPhoneNumber(std::string newPhoneNumber);
		void	setDarkestSecret(std::string newDarkestSecret);
};