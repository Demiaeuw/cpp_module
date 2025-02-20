/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:23:02 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/20 09:12:07 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    // Test avec un std::vector
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    std::cout << "=== Test avec std::vector ===" << std::endl;
    try {
        std::cout << "Trouvé : " << *easyfind(vec, 30) << std::endl; // OK
        std::cout << "Trouvé : " << *easyfind(vec, 50) << std::endl; // OK
        std::cout << "Trouvé : " << *easyfind(vec, 100) << std::endl; // Exception
    }
    catch (std::exception &e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Test avec un std::list
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);

    std::cout << "\n=== Test avec std::list ===" << std::endl;
    try {
        std::cout << "Trouvé : " << *easyfind(lst, 3) << std::endl; // OK
        std::cout << "Trouvé : " << *easyfind(lst, 5) << std::endl; // OK
        std::cout << "Trouvé : " << *easyfind(lst, 10) << std::endl; // Exception
    }
    catch (std::exception &e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}

