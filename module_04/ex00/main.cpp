/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:26:25 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/21 16:24:52 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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
	std::cout << std::endl;

	delete meta; delete j; delete i;
	return 0;
}