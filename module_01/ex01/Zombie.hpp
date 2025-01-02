/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:43:23 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/02 15:09:07 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <cctype>

class Zombie
{
	private:
		std::string		name;
		
	public:
		Zombie();
		Zombie(std::string	name);
		~Zombie();

		void	announce();
		void	set_name(std::string name);
};

Zombie*		zombieHorde(int N, std::string name);
int			catchNzombie(std::string n);

#endif