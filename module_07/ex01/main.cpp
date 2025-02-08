/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:47:02 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 07:47:38 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

// Fonction qui **affiche** un élément (lecture seule)
void printTiter(int const &a) {
    std::cout << a << " --- ";
}

// Fonction qui **modifie** un élément
void increment(int &a) {
    a += 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    const int c_arr[] = {10, 20, 30, 40, 50};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Avant iter() : " << std::endl;
    iter(arr, len, printTiter);
    std::cout << std::endl;

    std::cout << "Après iter() avec increment() : " << std::endl;
    iter(arr, len, increment);
    iter(arr, len, printTiter);
    std::cout << std::endl;

    std::cout << "Test avec tableau `const` : " << std::endl;
    iter(c_arr, len, printTiter);
    std::cout << std::endl;

    return 0;
}
