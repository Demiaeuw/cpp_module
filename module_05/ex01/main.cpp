/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:28:41 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/05 03:50:10 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    std::cout << "===== Création des Bureaucrats =====" << std::endl;
    try {
        Bureaucrat b1("Alice", 42);
        Bureaucrat b2("Bob", 100);
        Bureaucrat b3("Charlie", 1);
        Bureaucrat b4("David", 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
        std::cout << b4 << std::endl;

        std::cout << "\n===== Création des Forms =====" << std::endl;
        Form f1("Tax Form", 50, 75);
        Form f2("Top Secret File", 20, 50);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        std::cout << "\n===== Tests de signature =====" << std::endl;
        b1.signForm(f1);  // Alice (42) peut signer (50 requis) ✅
        b2.signForm(f1);  // Bob (100) ne peut pas signer (50 requis) ❌
        b3.signForm(f2);  // Charlie (1) peut signer (20 requis) ✅

        std::cout << "\n===== Statut des Forms après tentative de signature =====" << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        std::cout << "\n===== Test de signature impossible =====" << std::endl;
        Bureaucrat b5("Eve", 120);
        Form f3("Impossible Form", 100, 150);
        b5.signForm(f3);  // Eve (120) ne peut pas signer (100 requis) ❌

    } catch (std::exception &e) {
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }

    return 0;
}

