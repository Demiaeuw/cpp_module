/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:01:26 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:18:58 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal(copy) {
	std::cout << "Copy Cat constructor called for " << copy.getType() << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl << "Delete Cat's Brain" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

Brain*	Cat::getBrain() const {
	return this->brain;
}