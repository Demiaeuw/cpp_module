/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:21:20 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 02:41:04 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constructeur avec target
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

// Constructeur par copie
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

// Destructeur
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

// Opérateur d'affectation
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this == &copy)
        return *this;
    AForm::operator=(copy);  // Copie les attributs de `AForm`
    this->_target = copy._target;
    return *this;
}

// Getter pour `_target`
std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

// Implémentation de `execute()`
void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!this->getIsSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();

    // Création du fichier "<target>_shrubbery"
    std::ofstream file((_target + "_shrubbery").c_str());
    if (file.is_open()) {
        file << "      /\\      \n";
        file << "     /  \\     \n";
        file << "    /    \\    \n";
        file << "   /      \\   \n";
        file << "  /________\\  \n";
        file << "     |  |     \n";
        file << "     |  |     \n";
        file.close();
        std::cout << "Shrubbery created in " << _target << "_shrubbery" << std::endl;
    } else {
        std::cerr << "Error: Unable to create " << _target << "_shrubbery" << std::endl;
    }
}
