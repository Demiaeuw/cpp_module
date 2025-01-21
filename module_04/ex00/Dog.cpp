/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:22:39 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/21 15:39:43 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "Copy Dog constructor called for " << copy.getType() << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Destructor Cat called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Wouaf" << std::endl;
}