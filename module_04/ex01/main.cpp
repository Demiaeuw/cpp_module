/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:26:25 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:17:09 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdio>

int	main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << "type of j	: " << j->getType() << " " << std::endl;
	std::cout << "sound of j	: ";
	j->makeSound();
	std::cout << std::endl;
	
	
	std::cout << "type of i	: " << i->getType() << " " << std::endl;
	std::cout << "sound of i	: ";
	i->makeSound();
	std::cout << std::endl;
	
	
	std::cout << "type of meta	: " << meta->getType() << " " << std::endl;
	std::cout << "sound of meta	: ";
	meta->makeSound();
	
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "---------------------/Wrong/---------------------" << std::endl;
	std::cout << std::endl << std::endl << std::endl;
	
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();

	std::cout << std::endl;
	
	
	
	std::cout << "type of c	: " << c->getType() << " " << std::endl;
	std::cout << "sound of c	: ";
	c->makeSound();
	std::cout << std::endl;
	
	
	std::cout << "type of meta	: " << Wrongmeta->getType() << " " << std::endl;
	std::cout << "sound of meta	: ";
	Wrongmeta->makeSound();
	std::cout << std::endl;

	delete meta; delete i; delete j; delete Wrongmeta; delete c;

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "------------------/Active Brain/-----------------" << std::endl;
	std::cout << std::endl << std::endl << std::endl;


	Dog*	d = new Dog();
	
	d->getBrain()->setIdeas(0, "	Wait near master");
	d->getBrain()->setIdeas(1, "	Eat fast");
	d->getBrain()->setIdeas(2, "	sleep before go out");
	
	std::cout << std::endl;
	for (int i = 0; i <= 2; i++) {
		std::cout << d->getBrain()->getIdeas(i) << std::endl;
	}
	std::cout << std::endl;

	delete d;

	
	
	std::cout << std::endl << std::endl<< std::endl;
	std::cout << "-------------/all destructor called/-------------" << std::endl;
	std::cout << std::endl << std::endl << std::endl;
	return 0;
}