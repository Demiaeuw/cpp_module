/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:31:05 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/05 03:41:44 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _gradeToSign(signGrade), _gradeToExec(execGrade) {
	std::cout << "Constructor called" << std::endl;
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}

//------------------------------------------------------//

Form& Form::operator=(const Form& copy) {
	if (this == &copy)
		return *this;
	this->_signed = copy._signed;

	return *this;
}

//------------------------------------------------------//

std::string Form::getName() const {
	return this->_name;
}

bool Form::getIsSigned() const {
	return this->_signed;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExec() const {
	return this->_gradeToExec;
}

//------------------------------------------------------//

void	Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > this->_gradeToSign) {
		throw GradeTooLowException();
	}
	_signed = true;
}

//------------------------------------------------------//

const char* Form::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high to this form";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low to this form";
}

//------------------------------------------------------//

std::ostream& operator<<(std::ostream& os, const Form& f) {
    os << "Form: " << f.getName()
       << ", requires grade " << f.getGradeToSign() << " to sign, "
       << f.getGradeToExec() << " to execute. "
       << "Status: " << (f.getIsSigned() ? "signed" : "not signed") << ".";
    return os;
}
