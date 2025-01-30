/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:39:23 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/21 16:44:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	private:
	
	protected:
		std::string	Type;
	
	public:
			//constructor / destructor
		Animal();
		Animal(const std::string type);
		Animal(const Animal& copy);
		virtual ~Animal();

			//operator surcharged
		Animal& operator=(const Animal& other);

			//fonction
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif