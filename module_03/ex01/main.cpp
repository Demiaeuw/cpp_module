/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:44:38 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 22:36:50 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	// Création d'une instance de ScavTrap
	ScavTrap scav("Dimitri");

	// Test des attaques
	scav.attack("Jhon");
	scav.takeDamage(10);
	scav.beRepaired(2);

	// Test du mode gardien
	scav.guardGate();

	return 0;
}