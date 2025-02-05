/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:30:47 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/05 03:45:52 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
   private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;

   public:
// Constructeurs et destructeur
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form& copy);
	~Form();

// Opérateur d'affectation
	Form& operator=(const Form& copy);

// Getters
	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;

// Fonction membre pour signer
	void	beSigned(const Bureaucrat& b);

// Exceptions internes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Form& f);
