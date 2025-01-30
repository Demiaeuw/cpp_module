/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:43:12 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/21 16:47:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Default type") {
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : Type(type) {
	std::cout << "Type constructor called : " << type << std::endl;
}

Animal::Animal(const Animal& copy) : Type(copy.Type) {
	std::cout << "Copy constructor called" <<  std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor called !" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->Type = other.Type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->Type;
}

void	Animal::makeSound() const {
	std::cout << "Default Sound" << std::endl;
}