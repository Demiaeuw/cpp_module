/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:20:47 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/30 16:25:45 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
   private:
	

   protected:
	

   public:
		   //constructor / destructor
	   WrongCat();
	   WrongCat(const WrongCat& copy);
	   ~WrongCat();

	   WrongCat&	operator = (const WrongCat& copy);
};



#endif