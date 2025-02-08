/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:51:12 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 07:01:39 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base*	generate() {
	srand(time(NULL)); // Gestion de l'aléatoire
	int	random = rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Type inconnu" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type: A" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type: B" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type: C" << std::endl;
		return;
	} catch (...) {}

	std::cout << "Type inconnu" << std::endl;
}