/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:28:39 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/04 15:56:45 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string		type;
		
	public:
		Weapon();
		Weapon(std::string str);
		~Weapon();

		void					setType(std::string type);
		const std::string&		getType() const;
};

#endif