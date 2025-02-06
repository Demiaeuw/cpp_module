/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:10:32 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 03:22:41 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructeurs / Destructeur
Intern::Intern() {
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& copy) {
    (void)copy;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern destructor called" << std::endl;
}

// Opérateur d'affectation
Intern& Intern::operator=(const Intern& copy) {
    (void)copy;
    return *this;
}

// Fonctions de création de formulaire (remplace les lambdas)
AForm* createPresidential(std::string target) { return new PresidentialPardonForm(target); }
AForm* createRobotomy(std::string target) { return new RobotomyRequestForm(target); }
AForm* createShrubbery(std::string target) { return new ShrubberyCreationForm(target); }

// Fonction qui crée un formulaire
AForm* Intern::makeForm(std::string formName, std::string target) {
    std::string formTypes[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (*formCreators[3])(std::string) = { createPresidential, createRobotomy, createShrubbery };

    for (int i = 0; i < 3; i++) {
        if (formName == formTypes[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cerr << "Error: Form '" << formName << "' not found!" << std::endl;
    return NULL;
}

