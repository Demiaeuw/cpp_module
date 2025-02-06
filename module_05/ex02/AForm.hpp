/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:30:47 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:21:48 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
   private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;

   public:
// Constructeurs et destructeur
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm& copy);
	virtual ~AForm();  // Ajout de virtual pour garantir un bon polymorphisme

// Opérateur d'affectation
	AForm& operator=(const AForm& copy);

// Getters
	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;

// Fonction membre pour signer
	void	beSigned(const Bureaucrat& b);

	virtual void execute(const Bureaucrat& executor) const = 0;

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
std::ostream& operator<<(std::ostream& os, const AForm& f);
