/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:17:38 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 03:08:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

// 🎨 Couleurs ANSI pour la console
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"

int main() {
    try {
        std::cout << BOLD << CYAN << "\n===== Création des Bureaucrates =====\n" << RESET;
        Bureaucrat alice("Alice", 1);   // Top grade
        Bureaucrat bob("Bob", 50);      // Moyen grade
        Bureaucrat charlie("Charlie", 150); // Bas grade
        Bureaucrat dave("Dave", 40);    // ✅ Peut exécuter RobotomyRequestForm

        std::cout << GREEN << alice << RESET << std::endl;
        std::cout << YELLOW << bob << RESET << std::endl;
        std::cout << RED << charlie << RESET << std::endl;
        std::cout << BLUE << dave << RESET << std::endl;

//----------------------------------------------------------------------------------------------------------------//

        std::cout << BOLD << CYAN << "\n===== Création des Forms =====\n" << RESET;
        PresidentialPardonForm presidentialForm("Marvin");
        RobotomyRequestForm robotomyForm("Bender");
        ShrubberyCreationForm shrubberyForm("Garden");
		ShrubberyCreationForm wrongShrubberyForm("Wrong");

        std::cout << MAGENTA << presidentialForm << RESET << std::endl;
        std::cout << MAGENTA << robotomyForm << RESET << std::endl;
        std::cout << MAGENTA << shrubberyForm << RESET << std::endl;
		std::cout << MAGENTA << wrongShrubberyForm << RESET << std::endl;

//----------------------------------------------------------------------------------------------------------------//

        std::cout << BOLD << CYAN << "\n===== Tests de signature des Forms =====\n" << RESET;
        alice.signForm(presidentialForm);
        bob.signForm(robotomyForm);
        alice.signForm(shrubberyForm);
		charlie.signForm(wrongShrubberyForm);

//----------------------------------------------------------------------------------------------------------------//

        std::cout << BOLD << CYAN << "\n===== Statut après signature =====\n" << RESET;
        std::cout << GREEN << presidentialForm << RESET << std::endl;
        std::cout << GREEN << robotomyForm << RESET << std::endl;
        std::cout << GREEN << shrubberyForm << RESET << std::endl;
		std::cout << RED << wrongShrubberyForm << RESET << std::endl;

//----------------------------------------------------------------------------------------------------------------//

        std::cout << BOLD << CYAN << "\n===== Tests d'exécution des Forms =====\n" << RESET;
        alice.executeForm(presidentialForm);  
        
        // Bob ne peut PAS exécuter RobotomyRequestForm
        std::cout << YELLOW << "Bob try to exec RobotomyRequestForm...\n" << RESET;
        bob.executeForm(robotomyForm);        

        // ✅ Dave peut exécuter RobotomyRequestForm (grade 40 ≤ 45)
        std::cout << GREEN << "Dave try to exec RobotomyRequestForm...\n" << RESET;
        dave.executeForm(robotomyForm);        

        alice.executeForm(shrubberyForm);   

        std::cout << BOLD << CYAN << "\n===== Autre test : Bureaucrate essayant d'exécuter sans signer =====\n" << RESET;
        RobotomyRequestForm unsignedForm("UnSigned");
        alice.executeForm(unsignedForm); // ❌ Doit échouer car non signé

    } catch (std::exception &e) {
        std::cout << RED << "Exception attrapée: " << e.what() << RESET << std::endl;
    }

    return 0;
}
