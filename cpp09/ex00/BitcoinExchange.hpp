/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:27 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 14:56:21 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define RESET		"\033[0m"

# define CYAN		"\033[36m"
# define GREEN		"\033[32m"
# define RED		"\033[31m"
# define YELLOW		"\033[33m"
# define PURPLE		"\033[35m"

# include <fstream>
# include <iostream>
# include <sstream>
# include <string>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_csv;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &);
		BitcoinExchange &operator=(BitcoinExchange const &);
		~BitcoinExchange();
		bool parseFile( const std::string & );
		bool parseCsv( const std::string & );
		double getResult( const std::string &, double);
};

#endif