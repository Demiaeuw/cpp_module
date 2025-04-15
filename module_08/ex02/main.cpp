/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:03:01 by acabarba          #+#    #+#             */
/*   Updated: 2025/04/15 15:11:14 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

void printTitle(const std::string &title) {
    std::cout << CYAN << "\n=== " << title << " ===\n" << RESET;
}

int main() {
    printTitle("Test MutantStack basic");

    MutantStack<int> mstack;

    std::cout << GREEN << "→ On push 5 puis 17" << RESET << std::endl;
    mstack.push(5);
    mstack.push(17);

    std::cout << YELLOW << "Top de la stack (devrait être 17): " << RESET << mstack.top() << std::endl;

    std::cout << GREEN << "→ On pop (enlève 17)" << RESET << std::endl;
    mstack.pop();

    std::cout << YELLOW << "Taille après pop (devrait être 1): " << RESET << mstack.size() << std::endl;

    std::cout << GREEN << "→ On push 3, 5, 737, 0 dans la stack" << RESET << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << GREEN << "→ Parcours de la stack avec les itérateurs :" << RESET << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    printTitle("Comparaison avec std::list");

    std::cout << GREEN << "→ On reproduit la même séquence avec une std::list" << RESET << std::endl;

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.pop_back(); // retire 17
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();

    std::cout << GREEN << "→ Parcours de la liste :" << RESET << std::endl;
    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return 0;
}
