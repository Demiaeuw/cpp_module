/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:21:18 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:33:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
   private:
	std::string 	_target;

   protected:
	

   public:
// Constructor / destructor
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();

// Assignment operator
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);

// Getters
	std::string getTarget() const;
// Member fonctions
	void execute(const Bureaucrat& executor) const;

};
