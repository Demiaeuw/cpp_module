/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:49:01 by acabarba          #+#    #+#             */
/*   Updated: 2024/12/31 17:28:48 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main()
{
	PhoneBook		repertory;
	std::string		str;

	while (str != "EXIT")
	{
		std::cout << "Enter commande: ";
		std::getline(std::cin, str);
		if (str == "ADD")
			repertory.add();
		else if (str == "SEARCH")
			repertory.search();
	}
	return 0;
}