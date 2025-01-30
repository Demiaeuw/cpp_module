/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:25:07 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/30 16:48:44 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal {
	private:
		Brain*	brain;
	protected:

	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		void	makeSound() const;
};

#endif