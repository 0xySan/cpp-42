/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:23:55 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 15:53:27 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

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
#include <stack>

class RPN
{
	private:
		std::stack<int> _st;
	public:
		RPN();
		RPN( RPN const & );
		RPN &operator=( RPN const & );
		~RPN();
		bool math( std::string const & );
};

#endif