/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:57:03 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/02 14:40:43 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie* zombie = newZombie("Yonieva");
	zombie->announce();
	randomChump("Middle");
	delete zombie;
	return 0;
}