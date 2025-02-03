/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:22:39 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:03:39 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "Copy Dog constructor called for " << copy.getType() << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl << "Delete Dog's brain" << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const {
	std::cout << "Wouaf" << std::endl;
}

Brain*	Dog::getBrain() const {
	return this->brain;
}