/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:28:43 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:44:32 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "Constructor called, and check grade" << std::endl;
	
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}


//-----------------------------------------------------------------//


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
    std::cout << "Assignment operator called" << std::endl;

    if (this == &copy)
        return *this;
    if (this->_name != copy._name)
        throw std::runtime_error("Cannot assign Bureaucrat objects with different names!");

    this->_grade = copy._grade;
    return *this;
}



//-----------------------------------------------------------------//


const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Error: Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Error: Grade is too low!";
}



//-----------------------------------------------------------------//



std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}



//-----------------------------------------------------------------//



void Bureaucrat::incrementGrade() {
    std::cout << "-->  incrementGrade called" << std::endl;
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    std::cout << "-->  decrementGrade called" << std::endl;
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}


//-----------------------------------------------------------------//



std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade ";

    // Vérification du grade avant l'affichage
    if (b.getGrade() < 1 || b.getGrade() > 150)
        os << "INVALID GRADE (should be between 1 and 150)!";
    else
        os << b.getGrade();

    return os;
}


//-----------------------------------------------------------------//


void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << _name << " couldn't sign " << form.getName()
                  << " because : " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm& form) {
    try {
        form.execute(*this);  // ✅ Appelle execute() défini dans `AForm`
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->_name << " couldn't execute " << form.getName()
                  << " because: " << e.what() << std::endl;
    }
}



