/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 05:17:38 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 03:24:51 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
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
    std::cout << BOLD << CYAN << "\n===== Création de l'Intern et du Bureaucrate =====\n" << RESET;
    Intern intern;
    Bureaucrat boss("Boss", 1);

    std::cout << BOLD << CYAN << "\n===== Tests avec Intern =====\n" << RESET;

    std::cout << BLUE << "\n📝 Intern tente de créer les formulaires...\n" << RESET;

    AForm* form1 = intern.makeForm("presidential pardon", "Marvin");
    AForm* form2 = intern.makeForm("robotomy request", "Bender");
    AForm* form3 = intern.makeForm("shrubbery creation", "Garden");
    AForm* form4 = intern.makeForm("unknown form", "Target"); // ❌ Formulaire inconnu

    std::cout << BOLD << CYAN << "\n===== Tests de signature des Forms =====\n" << RESET;

    if (form1) {
        std::cout << YELLOW << "\n🖊️  Boss tente de signer le PresidentialPardonForm..." << RESET << std::endl;
        boss.signForm(*form1);
    }
    if (form2) {
        std::cout << YELLOW << "\n🖊️  Boss tente de signer le RobotomyRequestForm..." << RESET << std::endl;
        boss.signForm(*form2);
    }
    if (form3) {
        std::cout << YELLOW << "\n🖊️  Boss tente de signer le ShrubberyCreationForm..." << RESET << std::endl;
        boss.signForm(*form3);
    }

    std::cout << BOLD << CYAN << "\n===== Tests d'exécution des Forms =====\n" << RESET;

    if (form1) {
        std::cout << GREEN << "\n🚀 Boss exécute le PresidentialPardonForm..." << RESET << std::endl;
        boss.executeForm(*form1);
        delete form1;
    }
    if (form2) {
        std::cout << GREEN << "\n🚀 Boss exécute le RobotomyRequestForm..." << RESET << std::endl;
        boss.executeForm(*form2);
        delete form2;
    }
    if (form3) {
        std::cout << GREEN << "\n🚀 Boss exécute le ShrubberyCreationForm..." << RESET << std::endl;
        boss.executeForm(*form3);
        delete form3;
    }

    std::cout << BOLD << CYAN << "\n===== Test d'un formulaire inconnu =====\n" << RESET;

    if (form4 == NULL) {
        std::cout << RED << "\n❌ Impossible de créer un formulaire inconnu !\n" << RESET;
    }

    std::cout << BOLD << CYAN << "\n===== Fin du programme =====\n" << RESET;

    return 0;
}
