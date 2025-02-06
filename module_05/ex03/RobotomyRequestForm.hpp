/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:21:20 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:36:32 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
   private:
	std::string _target;

   protected:
	

   public:
// Constructor / destructor
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

// Assignment operator
	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

// Getters
	std::string getTarget() const;
// Member fonctions
	void execute(const Bureaucrat& executor) const;

};
