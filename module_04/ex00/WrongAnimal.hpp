/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:59:46 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/30 16:18:47 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
   private:

   protected:
	std::string	Type;
	

   public:
		   //constructor / destructor
	   WrongAnimal();
	   WrongAnimal(const WrongAnimal& copy);
	   WrongAnimal(std::string type);
	   virtual ~WrongAnimal();

	   WrongAnimal&	operator = (const WrongAnimal& copy);
	   
	   virtual void	makeSound() const;
	   std::string	getType() const;
};


#endif