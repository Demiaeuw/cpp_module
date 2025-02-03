/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:51:36 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:15:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat :  virtual public AAnimal {
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