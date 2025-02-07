/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:24:34 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/07 21:16:33 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error : Wrong number of argument" << std::endl;
		return 1;
	}
	
	ScalarConvert::convertTo(av[1]);
	
	return 0;
}