/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:13:26 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/06 18:08:51 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		void executeall(std::string str);
	private:
		int	ADD(void);
		int	SEARCH(void);

		Contact	contacts[8];
		int		index;
};

void	readInput(std::string &input);