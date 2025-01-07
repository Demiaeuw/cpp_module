/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:43:50 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/04 15:55:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string		name;
		Weapon*			weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif