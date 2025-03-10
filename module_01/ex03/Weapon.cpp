/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:29:02 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/03 18:16:10 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon()
{}

void		Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType() const
{
	const std::string& stringREF = this->type;
	return stringREF;
}