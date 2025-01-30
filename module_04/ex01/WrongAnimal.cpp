/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:14:21 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/30 16:20:04 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type("Default type") {
	std::cout << "WrongDefault constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : Type(type) {
	std::cout << "WrongType constructor called : " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : Type(copy.Type) {
	std::cout << "WrongCopy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongDestructor called !" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal& copy) {
	this->Type = copy.Type;
	std::cout << "WrongAnimal operator = called" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Default Sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->Type);
}