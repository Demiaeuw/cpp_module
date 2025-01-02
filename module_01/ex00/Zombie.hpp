/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:57:30 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/02 14:34:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string		name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void			announce(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif