/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:44:38 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 02:58:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
    // Create ClapTrap instances
    ClapTrap robot1("Clapster");
    ClapTrap robot2("Trapper");

    // Simulate actions
    robot1.attack("Trapper");
    robot2.takeDamage(5);

    robot2.attack("Clapster");
    robot1.takeDamage(8);

    robot1.beRepaired(5);
    robot2.beRepaired(10);

    return 0;
}