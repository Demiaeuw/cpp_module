/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:40:24 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/03 12:43:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
   private:
	std::string ideas[100];
	
   protected:
	
   public:
	   Brain();
	   Brain(const Brain& copy);
	   ~Brain();

	   Brain& operator=(const Brain& other);

	   void	setIdeas(int index, std::string idea);
	   std::string	getIdeas(int index) const;
};

#endif