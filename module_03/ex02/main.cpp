/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:44:38 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 23:07:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	// Création d'une instance de ScavTrap
	ScavTrap scav("Dimitri");
	FragTrap frag("Jhon");

	// Test des attaques
	scav.attack("Micheal");
	scav.takeDamage(10);
	scav.beRepaired(10);

	frag.attack("Micheal");
	frag.takeDamage(10);
	frag.beRepaired(2);
	
	// Test du mode gardien
	scav.guardGate();

	// High Fives
	frag.highFivesGuys();

	return 0;
}