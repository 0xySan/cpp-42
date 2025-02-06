/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:35:20 by etaquet           #+#    #+#             */
/*   Updated: 2025/02/06 03:10:01 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (unsigned int i = 1; i < argc; i++)
	{
		int	j = 0;
		while (argv[i][j])
		{
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
			j++;
		}
	}
	std::cout << std::endl; 
	return (0);
}