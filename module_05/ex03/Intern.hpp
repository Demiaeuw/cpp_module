/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:10:22 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 03:17:41 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern {
   private:
	

   protected:
	

   public:
// Constructor / destructor
	Intern();
	Intern(const Intern& copy);
	~Intern();

// Assignment operator
	Intern& operator=(const Intern& copy);

// Getters

// Member fonctions
	AForm* makeForm(std::string formName, std::string target);
};
