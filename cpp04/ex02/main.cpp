/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:38:43 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/29 04:55:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    // Animal test3; <- wont work
    
    Animal	*test = new Cat();
	std::cout << test->getType() << std::endl;
	test->makeSound();

	Animal	*test2 = new Dog();
	std::cout << test2->getType() << std::endl;
	test2->makeSound();

	delete test;
	delete test2;
	return (0);
}