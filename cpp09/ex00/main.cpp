/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:31 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 14:43:51 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
		std::cerr << RED << "Usage: " << argv[0] << " <database_file>" << RESET << std::endl;
		return 1;
	}
    BitcoinExchange btc;
    btc.parseCsv("data.csv");
	btc.parseFile(argv[1]);
}