/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:28:31 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 20:23:12 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long timeDiffMicroseconds(const timeval& start, const timeval& end)
{
    return (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec);
}

void printBefore(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}

void printList(const std::list<int>& lst)
{
    std::list<int>::const_iterator it;
    for (it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2)
	{
		std::cerr << RED << "Usage: " << argv[0] << " <list of numbers>" << RESET << std::endl;
		return 1;
	}
	Pmerge sort;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	std::list<int> lt = sort.sortList(argc, argv);
	gettimeofday(&end, NULL);
	long elapsed_us = timeDiffMicroseconds(start, end);
	std::cout << "Before :   ";
	printBefore(argc, argv);
	std::cout << "After :    ";
	printList(lt);
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << elapsed_us << " us" << std::endl;
	gettimeofday(&start, NULL);
	sort.sortVector(argc, argv);
	gettimeofday(&end, NULL);
	elapsed_us = timeDiffMicroseconds(start, end);
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << elapsed_us << " us" << std::endl;
}