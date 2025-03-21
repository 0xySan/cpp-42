/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:56:06 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 18:21:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replaces(std::string line, std::string s1, std::string s2)
{
    std::string newLine;
	size_t startPos = 0;
	size_t foundPos = 0;

    while ((foundPos = line.find(s1, startPos)) != std::string::npos)
    {
		newLine.append(line, startPos, foundPos - startPos);
		newLine.append(s2);
		startPos = foundPos + s1.length();
	}
	newLine.append(line, startPos, std::string::npos);

	return newLine;
}

int main(int argc, char **av)
{
    if (argc != 4)
    {
        std::cout << " Didn't give all args : needed to give [filename] [s1] [s2] " << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty())
    {
		std::cout << "Error: The string to replace [s1] cannot be empty" << std::endl;
		return (1);
	} 
    std::ifstream   ifs(filename);
    if( ifs.fail())
    {
        std::cout << "Couldn't open the file : " << filename << std::endl;
        return (1);
    }
    std::ofstream   ofs(filename + ".replace");
    if( ofs.fail())
    {
        std::cout << "Couldn't create or read the file : " << filename + ".replace" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(ifs, line))
    {
        std::string newLine = replaces(line, s1, s2);
        ofs << newLine << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}