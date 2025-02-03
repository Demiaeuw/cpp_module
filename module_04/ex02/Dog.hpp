/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:25:07 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:15:56 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : virtual public AAnimal {
	private:
		Brain*	brain;
	protected:

	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif