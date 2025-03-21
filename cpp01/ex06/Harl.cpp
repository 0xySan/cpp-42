/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:31:16 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/21 19:51:28 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

void Harl::debug( void )
{
    const std::string RESET = "\033[0m";
    const std::string GREEN_BG = "\033[42m";
    const std::string WHITE_TEXT = "\033[97m";

    std::cout << GREEN_BG << WHITE_TEXT << " DEBUG:" << RESET << std::endl << GREEN_BG << WHITE_TEXT << " I love having extra bacon... " << RESET << std::endl;
}
void Harl::info( void )
{
    const std::string RESET = "\033[0m";
    const std::string BLUE_BG = "\033[44m";
    const std::string WHITE_TEXT = "\033[97m";

    std::cout << BLUE_BG << WHITE_TEXT << " INFO:" << RESET << std::endl << BLUE_BG << WHITE_TEXT << " I cannot believe adding extra bacon costs more... " << RESET << std::endl;
}
void Harl::warning( void )
{
    const std::string RESET = "\033[0m";
    const std::string YELLOW_BG = "\033[43m";
    const std::string WHITE_TEXT = "\033[97m";
    
    std::cout << YELLOW_BG << WHITE_TEXT << " WARNING:" << RESET << std::endl << YELLOW_BG << WHITE_TEXT << " I think I deserve some extra bacon for free... " << RESET << std::endl;
}
void Harl::error( void )
{
    const std::string RESET = "\033[0m";
    const std::string RED_BG = "\033[41m";
    const std::string WHITE_TEXT = "\033[97m";
    
    std::cout << RED_BG << WHITE_TEXT << " ERROR:" << RESET << std::endl << RED_BG << WHITE_TEXT << " This is unacceptable! I want to speak to the manager... " << RESET << std::endl;
}

void Harl::setFilter( std::string level )
{
    std::map<std::string, int> levelPriority =
    {
        {"DEBUG", 1},
        {"INFO", 2},
        {"WARNING", 3},
        {"ERROR", 4}
    };
    if (levelPriority.find(level) != levelPriority.end())
        filterLevel = level;
    else
        filterLevel = "UNKNOWN";
}

void Harl::complain( std::string level )
{
    std::map<std::string, void (Harl::*)()> actions =
    {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };

    std::map<std::string, int> levelPriority =
    {
        {"DEBUG", 1},
        {"INFO", 2},
        {"WARNING", 3},
        {"ERROR", 4},
        {"UNKNOWN", 5}
    };

    const std::string RESET = "\033[0m";
    const std::string MAGENTA_BG = "\033[45m";
    const std::string WHITE_TEXT = "\033[97m";

    if (actions.find(level) != actions.end() && levelPriority[level] >= levelPriority[filterLevel])
        (this->*actions[level])();
    else if (nb_of_calls == 0 && levelPriority[level] < levelPriority[filterLevel])
        std::cout << MAGENTA_BG << WHITE_TEXT << " Probably complaining about insignificant problems.\n" << RESET;
    else if (actions.find(level) == actions.end() && nb_of_calls == 0)
        std::cout << MAGENTA_BG << WHITE_TEXT << " Unknown complaint.\n" << RESET;
    nb_of_calls+=1;
}
