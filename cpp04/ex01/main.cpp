/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:38:43 by etaquet           #+#    #+#             */
/*   Updated: 2025/03/22 17:30:01 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int	main()
{
    //atexit(leaks_fun);
    
    int			N = 8;
    Animal		*animals[N];
    std::cout << std::endl << "--first phase:" << std::endl;
    for (int a=0;a<N;a++)
        ((a < N / 2) ? animals[a] = new Dog() : animals[a] = new Cat());

    std::cout << std::endl << "--second phase:" << std::endl;
    for (int a=0;a<N;a++)
        animals[a]->makeSound();

    std::cout << std::endl << "--last phase:" << std::endl;
    for (int a=0;a<N;a++)
        delete animals[a];


    std::cout << "\n-1-original construction: \n";
    Cat		*a = new Cat;


    std::cout << "\n-2-original idea: \n";
    a->setIdea("Thought of It", 0);
    std::cout << a->getIdea(0) << std::endl;


    std::cout << "\n-3-copy creation: \n";
    Cat 		*b = new Cat(*a);


    std::cout << "\n-4-original deletion: \n";
    delete a;


    std::cout << "\n-5-copy idea the same as the original: \n";
    std::cout << b->getIdea(0) << std::endl;


    std::cout << "\n-6-copy deletion: \n";
    delete b;
}