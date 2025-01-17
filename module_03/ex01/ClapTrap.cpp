/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:45:01 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 22:02:50 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap named constructor called for " << Name << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << Name << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &src) {
	std::cout << "ClapTrap operator overload = called" << std::endl;
	if (this != &src) {
		this->Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	return *this;
}

// Attack method
void	ClapTrap::attack(const std::string& target) {
	if (EnergyPoints > 0 && HitPoints > 0) {
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target
				<< ", causing " << AttackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << Name << " is unable to attack due to insufficient energy or health." << std::endl;
	}
}

// Take damage method
void	ClapTrap::takeDamage(unsigned int amount) {
	HitPoints -= amount;
	if (HitPoints < 0) HitPoints = 0;
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage! Remaining HP: " << HitPoints << std::endl;
}

// Repair method
void	ClapTrap::beRepaired(unsigned int amount) {
	if (EnergyPoints > 0 && HitPoints > 0) {
		EnergyPoints--;
		HitPoints += amount;
		std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " points! Remaining HP: " << HitPoints << std::endl;
	} else {
		std::cout << "ClapTrap " << Name << " is unable to repair due to insufficient energy or health." << std::endl;
	}
}