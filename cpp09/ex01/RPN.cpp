/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:37:21 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 19:36:16 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <ostream>

RPN::RPN() {}

RPN::RPN( RPN const &other ) { *this = other; }

RPN &RPN::operator=( RPN const &other )

{
	if (this != &other)
		_st = other._st;
	return *this;
}

RPN::~RPN() {}

bool isValidChar(char key)
{
	return (key >= '0' && key <= '9') || key == '+' || key == '-' || key == '*' || key == '/';
}

bool isChar(char key)
{
	return key == '+' || key == '-' || key == '*' || key == '/';
}

int calculate(char key, int v1, int v2)
{
	if (key == '+')
		return v2 + v1;
	else if (key == '-')
		return v2 - v1;
	else if (key == '*')
		return v2 * v1;
	return v2 / v1;
}

bool RPN::math( std::string const &rpn )
{
	std::istringstream iss(rpn);
	std::string key;

	while (getline(iss, key, ' '))
	{
		if (key.size() != 1)
		{
			std::cerr << RED << "Error: '" << key << "'. Key must be 1 character no more" << RESET << std::endl;
			return false;
		}
		if (!isValidChar(key[0]))
		{
			std::cerr << RED << "Error: '" << key << "'. Key must be 0-9, '+', '-', '*', or '/'." << RESET << std::endl;
			return false;
		}
		if (isChar(key[0]))
		{
			if (_st.size() < 2)
			{
				std::cerr << RED << "Error: Trying to calculate with a stack size < 2" << RESET << std::endl;
				return false;
			}
			int v1, v2;
			v1 = _st.top();
			_st.pop();
			v2 = _st.top();
			_st.pop();
			_st.push(calculate(key[0], v1, v2));
		}
		else
			_st.push(atoi(key.c_str()));
	}
	std::cout << _st.top() << std::endl;
	return true;
}