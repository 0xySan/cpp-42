/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:33 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 15:05:03 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {*this = other;}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
		_csv = other._csv;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

std::string trim(const std::string& s)
{
	size_t start = 0;
	while (start < s.size() && std::isspace(s[start])) ++start;
	size_t end = s.size();
	while (end > start && std::isspace(s[end - 1])) --end;
	return s.substr(start, end - start);
}

bool parseLine(const std::string& line, std::string& date, std::string& value)
{
	size_t pos = line.find(',');

	if (pos == std::string::npos)
		pos = line.find('|');
	if (pos == std::string::npos)
		return false;

	date = trim(line.substr(0, pos));
	value = trim(line.substr(pos + 1));
	return true;
}

double BitcoinExchange::getResult( const std::string &date, double value)
{
	std::map<std::string, double>::iterator it = _csv.lower_bound(date);
	if (it == _csv.begin() && it->first > date)
		return (0);
	else
	{
		if (it == _csv.end() || it->first > date)
			--it;
		return (value * it->second);
	}
}

bool BitcoinExchange::parseFile( const std::string &filename )
{
	std::ifstream file(filename.c_str());
	std::string line;

	if (!file.is_open())
	{
		std::cerr << RED << "Error: Could not open file: " << filename << RESET << std::endl;
		return false;
	}
	while (std::getline(file, line))
	{
		if (line == "date | value")
			continue ;
		std::string date, value;
		if (!parseLine(line, date, value))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}
		double val = std::stod(value);
		if (val < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (val > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue ;
		}
		std::cout << date << " => " << val << " = " << getResult(date, val) << std::endl;
	}
	return true;
}

bool BitcoinExchange::parseCsv( std::string const &filename )
{
	std::ifstream file(filename.c_str());
	std::string line;

	if (!file.is_open())
	{
		std::cerr << RED << "Error: Could not open csv file: " << filename << RESET << std::endl;
		return false;
	}
	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue ;
		std::string date, value;
		if (parseLine(line, date, value))
			_csv[date] = std::stod(value);
	}
	return true;
}
