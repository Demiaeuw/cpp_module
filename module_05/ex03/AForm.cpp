/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:31:05 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:21:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _gradeToSign(signGrade), _gradeToExec(execGrade) {
	std::cout << "Constructor called" << std::endl;
}

AForm::AForm(const AForm& copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm Destructor called" << std::endl;
}

//------------------------------------------------------//

AForm& AForm::operator=(const AForm& copy) {
	if (this == &copy)
		return *this;
	this->_signed = copy._signed;

	return *this;
}

//------------------------------------------------------//

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::getIsSigned() const {
	return this->_signed;
}

int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int AForm::getGradeToExec() const {
	return this->_gradeToExec;
}

//------------------------------------------------------//

void	AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > this->_gradeToSign) {
		throw GradeTooLowException();
	}
	_signed = true;
}

//------------------------------------------------------//

const char* AForm::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high to this AForm";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low to this AForm";
}

//------------------------------------------------------//

std::ostream& operator<<(std::ostream& os, const AForm& f) {
    os << "AForm: " << f.getName()
       << ", requires grade " << f.getGradeToSign() << " to sign, "
       << f.getGradeToExec() << " to execute. "
       << "Status: " << (f.getIsSigned() ? "signed" : "not signed") << ".";
    return os;
}
