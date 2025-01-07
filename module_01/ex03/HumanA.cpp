/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:44:00 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/04 15:59:47 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}