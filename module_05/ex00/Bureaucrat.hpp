/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:28:42 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/05 02:20:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat {
   private:
	const std::string 	_name;
	int					_grade;

   public:
// Constructeurs et destructeur
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	virtual ~Bureaucrat();

// Opérateur d’affectation
	Bureaucrat& operator=(const Bureaucrat& copy);



// Exceptions internes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

// Getters
	std::string	getName() const;
	int	getGrade() const;
	
// Fonctions de modification
	void	incrementGrade();
	void	decrementGrade();
};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

