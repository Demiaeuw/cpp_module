/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:49:03 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 12:44:27 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Copy constructo called" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Destructor called" << std::endl;
}

Brain&	Brain::operator = (const Brain& copy) {
	std::cout << "Brain operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}

void	Brain::setIdeas(int index, std::string idea) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string	Brain::getIdeas(int	index) const {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return NULL;
}