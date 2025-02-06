/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:21:21 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:40:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
   private:
	std::string _target;

   protected:
	

   public:
// Constructor / destructor
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();

// Assignment operator
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

// Getters
	std::string getTarget() const;
// Member fonctions
	void execute(const Bureaucrat& executor) const;
};
