/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:22:33 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/02 16:17:11 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    // Création de la variable string
    std::string str = "HI THIS IS BRAIN";

    // Déclaration du pointeur
    std::string* stringPTR = &str;

    // Déclaration de la référence
    std::string& stringREF = str;

    // Affichage des adresses mémoires
    std::cout << "Address of str    -    - 	: " << &str << std::endl;
    std::cout << "Address held by stringPTR 	: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF 	: " << &stringREF << std::endl << std::endl;

    // Affichage des valeurs
    std::cout << "Value of str     -      -	: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR	: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF	: " << stringREF << std::endl;

    return 0;
}
