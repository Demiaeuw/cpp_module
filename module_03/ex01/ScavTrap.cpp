/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 03:35:02 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 23:14:57 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	this->Guard = false;
	std::cout << "ScavTrap default constructor called"	<< std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap() {
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->Guard = false;
	std::cout << "ScavTrap name constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	this->Guard = copy.Guard;
	std::cout << "ScavTrap copy constructor called for " << copy.Name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (EnergyPoints > 0 && HitPoints > 0) {
		EnergyPoints--;
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << Name << " is unable to attack due to insufficient energy or health." << std::endl;
	}
}

void	ScavTrap::guardGate() {
	if (this->Guard == false) {
		this->Guard = true;
		std::cout << "ScavTrap " << this->Name << " already guarding the gate." << std::endl;
	}
}
