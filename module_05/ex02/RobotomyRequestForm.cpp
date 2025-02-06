/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:21:19 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:38:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

// Constructeur avec target
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

// Constructeur par copie
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), _target(copy._target) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

// Destructeur
RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

// Opérateur d'affectation
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    if (this == &copy)
        return *this;
    AForm::operator=(copy);
    this->_target = copy._target;
    return *this;
}

// Getter pour `_target`
std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

// Implémentation de `execute()`
void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!this->getIsSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();

    // Générer un bruit de perceuse
    std::cout << "* BZZZZZZ... DRILLING NOISES *" << std::endl;

    // Générer un résultat aléatoire (50% de réussite)
    srand(time(NULL));  // Initialise le générateur aléatoire
    if (rand() % 2 == 0) {
        std::cout << _target << " has been successfully robotomized!" << std::endl;
    } else {
        std::cout << "The robotomy failed on " << _target << "!" << std::endl;
    }
}
