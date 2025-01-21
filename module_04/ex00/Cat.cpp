/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:01:26 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/21 15:39:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	std::cout << "Copy Cat constructor called for " << copy.getType() << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}