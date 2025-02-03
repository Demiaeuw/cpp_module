/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:39:23 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 13:11:54 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	private:
	
	protected:
		std::string	Type;
	
	public:
			//constructor / destructor
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal();

			//operator surcharged
		AAnimal& operator=(const AAnimal& other);

			//fonction
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif