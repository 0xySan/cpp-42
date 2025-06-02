/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:38:10 by etaquet           #+#    #+#             */
/*   Updated: 2025/06/02 20:27:27 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <climits>
#include <cmath>
#include <cstddef>

Pmerge::Pmerge() {}

Pmerge::Pmerge( Pmerge const &other ) {*this = other;}

Pmerge & Pmerge::operator=( Pmerge const &other )
{
	if (this != &other)
	{
		_lt = other._lt;
		_vt = other._vt;
	}
	return *this;
}

Pmerge::~Pmerge() {}

void ListfordJohnsonSort(std::list<int>& lst) {
	if (lst.size() <= 1)
		return;

	std::list< std::pair<int, int> > pairs;
	std::list<int>::iterator it = lst.begin();

	while (it != lst.end())
	{
		int first = *it;
		++it;
		if (it != lst.end())
		{
			int second = *it;
			++it;
			if (first > second)
				std::swap(first, second);
			pairs.push_back(std::make_pair(first, second));
		}
		else
			pairs.push_back(std::make_pair(first, first));
	}

	std::list<int> sorted;
	std::list< std::pair<int, int> >::iterator pit;
	for (pit = pairs.begin(); pit != pairs.end(); ++pit)
		sorted.push_back(pit->second);

	ListfordJohnsonSort(sorted);

	for (pit = pairs.begin(); pit != pairs.end(); ++pit)
	{
		int small = pit->first;

		std::list<int>::iterator insert_pos = sorted.begin();
		while (insert_pos != sorted.end() && *insert_pos <= small)
			++insert_pos;
		sorted.insert(insert_pos, small);
	}

	lst = sorted;
}

std::list<int> Pmerge::sortList( int vl, char **value )
{
	for (int i = 1; i < vl; ++i)
	{
		long v = std::atol(value[i]);
		if (v > INT_MAX || v < 0)
		{
			std::cerr << RED << "Error: '" << v << "'. Value is either < 0 or > INT_MAX." << std::endl;
			return std::list<int>();
		}
		_lt.push_back(v);
	}
	ListfordJohnsonSort(_lt);
	return _lt;
}

void VectorfordJohnsonSort(std::vector<int>& arr) {
	int n = arr.size();
	if (n <= 1) return;

	std::vector<std::pair<int, int> > pairs;
	std::vector<int> leftovers;

	for (int i = 0; i + 1 < n; i += 2) {
		int a = arr[i];
		int b = arr[i + 1];
		if (a > b) std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}

	if (n % 2 == 1)
		leftovers.push_back(arr[n - 1]);

	std::vector<int> maxElements;
	for (std::size_t i = 0; i < pairs.size(); ++i)
		maxElements.push_back(pairs[i].second);

	VectorfordJohnsonSort(maxElements);

	std::vector<int> result = maxElements;

	for (std::size_t i = 0; i < pairs.size(); ++i) {
		int small = pairs[i].first;
		std::vector<int>::iterator pos = std::upper_bound(result.begin(), result.end(), small);
		result.insert(pos, small);
	}

	for (std::size_t i = 0; i < leftovers.size(); ++i) {
		std::vector<int>::iterator pos = std::upper_bound(result.begin(), result.end(), leftovers[i]);
		result.insert(pos, leftovers[i]);
	}

	arr = result;
}


void Pmerge::sortVector( int vl, char **value )
{
	for (int i = 1; i < vl; ++i)
	{
		long v = std::atol(value[i]);
		if (v > INT_MAX || v < 0)
		{
			std::cerr << RED << "Error: '" << v << "'. Value is either < 0 or > INT_MAX." << std::endl;
			return ;
		}
		_vt.push_back(v);
	}
	VectorfordJohnsonSort(_vt);
}