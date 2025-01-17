/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:45:09 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/17 22:05:14 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:

	protected:
		std::string	Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		~ClapTrap();

		ClapTrap& operator = (const ClapTrap &src);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
