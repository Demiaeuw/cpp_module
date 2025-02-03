/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:51:36 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:05:08 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat :  virtual public Animal {
	private:
		Brain*	brain;
	protected:

	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif