/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:43:08 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/02 15:21:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	int			N = 10;
	Zombie*		Horde = zombieHorde(N, "Middle");

	for (int i = 0; i < N; i++)
	{
		Horde[i].announce();
	}

	delete [] Horde;
	
	return 0;
}