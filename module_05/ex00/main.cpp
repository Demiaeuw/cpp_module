/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:28:41 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/05 02:29:53 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    // Test d'un Bureaucrat avec un grade trop haut
    try {
        Bureaucrat b1("Alice", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();  // Va lever une exception
    }
	catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    // Test d'un Bureaucrat avec un grade trop bas
    try {
        Bureaucrat b2("Bob", 150);
        std::cout << b2 << std::endl;
        b2.decrementGrade();  // Va lever une exception
    }
	catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    // Test d'une création de Bureaucrat invalide
    try {
        Bureaucrat b3("Charlie", 200);  // Impossible à créer
        std::cout << b3 << std::endl;
    }
	catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    // Test d'un bureaucrat du centre
    try {
        Bureaucrat b4("Michael", 12);
        std::cout << b4 << std::endl;
        b4.decrementGrade();
        std::cout << b4 << std::endl;
        b4.decrementGrade();
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << b4 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
