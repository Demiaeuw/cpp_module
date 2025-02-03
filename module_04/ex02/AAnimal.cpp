/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:43:12 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:12:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : Type("Default type") {
	std::cout << "Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string type) : Type(type) {
	std::cout << "Type constructor called : " << type << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : Type(copy.Type) {
	std::cout << "Copy constructor called" <<  std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Destructor called !" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		this->Type = other.Type;
	}
	return *this;
}

std::string AAnimal::getType() const {
	return this->Type;
}
