/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:46:42 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 23:11:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->Guard = false;
	std::cout << "FragTrap default constructor called"	<< std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap() {
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->Guard = false;
	std::cout << "FragTrap name constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
	this->Guard = copy.Guard;
	std::cout << "FragTrap copy constructor called for " << copy.Name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "High Fives ?!" << std::endl;
}