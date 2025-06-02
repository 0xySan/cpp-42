/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:37:17 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 20:25:11 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

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
# include <vector>
# include <list>
# include <sys/time.h>
#include <algorithm>

class Pmerge
{
	private:
		std::list<int>		_lt;
		std::vector<int>	_vt;
	public:
		Pmerge();
		Pmerge( Pmerge const & );
		Pmerge & operator=( Pmerge const & );
		~Pmerge();
		std::list<int> sortList( int , char ** );
		void sortVector( int , char ** );
};

#endif