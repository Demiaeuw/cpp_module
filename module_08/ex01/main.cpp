/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:43 by acabarba          #+#    #+#             */
/*   Updated: 2025/04/15 14:52:53 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// ANSI colors
#define RESET       "\033[0m"
#define GREEN       "\033[32m"
#define RED         "\033[31m"
#define YELLOW      "\033[33m"
#define CYAN        "\033[36m"

void printTitle(const std::string &title) {
    std::cout << CYAN << "\n=== " << title << " ===\n" << RESET;
}

void printSuccess(const std::string &msg) {
    std::cout << GREEN << "[OK] " << msg << RESET << std::endl;
}

void printError(const std::string &msg) {
    std::cerr << RED << "[ERROR] " << msg << RESET << std::endl;
}

int main() {
    std::srand(std::time(0)); // For random numbers

    printTitle("Test 1 : Ajout simple + span");

    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        printSuccess("Ajout des 5 nombres réussi");

        std::cout << YELLOW << "Shortest span: " << RESET << sp.shortestSpan() << std::endl;
        std::cout << YELLOW << "Longest span: " << RESET << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        printError(e.what());
    }

    printTitle("Test 2 : Dépassement");

    try {
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3); // doit throw
    } catch (std::exception &e) {
        printError(e.what());
    }

    printTitle("Test 3 : Pas assez d'éléments pour span");

    try {
        Span sp(3);
        sp.addNumber(42);
        std::cout << sp.shortestSpan() << std::endl; // doit throw
    } catch (std::exception &e) {
        printError(e.what());
    }

    printTitle("Test 4 : Ajout via plage (range)");

    try {
        Span sp(10000);
        std::vector<int> v;
        for (int i = 0; i < 10000; ++i)
            v.push_back(std::rand());

        sp.addRange(v.begin(), v.end());

        printSuccess("Ajout de 10 000 nombres via plage réussi");

        std::cout << YELLOW << "Shortest span: " << RESET << sp.shortestSpan() << std::endl;
        std::cout << YELLOW << "Longest span: " << RESET << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        printError(e.what());
    }

    return 0;
}