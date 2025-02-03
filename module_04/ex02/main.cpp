/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:26:25 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:17:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdio>

int main() {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << "type of j	: " << j->getType() << " " << std::endl;
	std::cout << "sound of j	: ";
	j->makeSound();
	std::cout << std::endl;
	
	
	std::cout << "type of i	: " << i->getType() << " " << std::endl;
	std::cout << "sound of i	: ";
	i->makeSound();
	std::cout << std::endl;
	
	
	// Suppression des objets
	delete i;
	delete j;

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "------------------/Active Brain/-----------------" << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	Dog* d = new Dog();
	
	d->getBrain()->setIdeas(0, "	Wait near master");
	d->getBrain()->setIdeas(1, "	Eat fast");
	d->getBrain()->setIdeas(2, "	Sleep before going out");
	
	std::cout << std::endl;
	for (int i = 0; i <= 2; i++) {
		std::cout << d->getBrain()->getIdeas(i) << std::endl;
	}
	std::cout << std::endl;

	delete d;

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "-------------/all destructor called/-------------" << std::endl;
	std::cout << std::endl << std::endl << std::endl;
	return 0;
}
