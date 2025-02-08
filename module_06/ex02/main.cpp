/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:42:00 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:59:30 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main() {
    Base *ptr = generate();
    std::cout << "🔍 Identification via pointeur :" << std::endl;
    identify(ptr);

    std::cout << "🔍 Identification via référence :" << std::endl;
    identify(*ptr);

    delete ptr;
    return 0;
}
