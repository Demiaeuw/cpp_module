/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:48:54 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/06 12:45:36 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add()
{
	std::string		str;
	
	std::cout << std::endl;
	
	str = "";
	while (str =="")
	{
		std::cout << "Enter first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->repertory[this->index % 8].set_first_name(str);
	}
	str = "";
	while (str =="")
	{
		std::cout << "Enter last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->repertory[this->index % 8].set_last_name(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter nickname: ";
		if (std::getline(std::cin, str) && str != "")
			this->repertory[this->index % 8].set_nickname(str);
	}
	str = "";
	while (str =="")
	{
		std::cout << "Enter phonenumber: ";
		if (std::getline(std::cin, str) && str != "")
			this->repertory[this->index % 8].set_phone_number(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter secret about this contact: ";
		if (std::getline(std::cin, str) && str != "")
			this->repertory[this->index % 8].set_secret(str);
	}
	std::cout << "	Contact are create" << std::endl;
	this->index++;
}

void	PhoneBook::search()
{
	if (!this->repertory[0].get_first_name().size())
	{
		std::cout << "	Contact not found" << std::endl;
		return;
	}
	
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		std::cout	<< "|" << std::setw(10) << std::right << i
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].get_first_name())
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].get_last_name())
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].get_nickname()) 
					<< "|" << std::endl;
	}
	std::cout << " ------------------------------------------- " << std::endl;
	PhoneBook::print_index();
}

void	PhoneBook::print_index()
{
	std::string	index;
	int			lindex;
	
	std::cout << "	For seeing details enter index: " << std::endl;
	
	std::getline(std::cin, index);
	
	if (index != "0" && index != "1" && index != "2" && index != "3" && index != "4" && index != "5" && index != "6" && index != "7") {
		std::cout << "\tInvalid index." << std::endl;
		return;
	}

	
	lindex = atoi(index.c_str());
	
	if (lindex < 0 || lindex > 7)
	{
		std::cout << "	Invalid index." << std::endl;
		return;
	}
	if (!this->repertory[lindex].get_first_name().size())
	{
		std::cout << "	No contact here" << std::endl;
		return;
	}
	std::cout 	<< "First Name:		" << this->repertory[lindex].get_first_name() << std::endl << "Last Name:		" << this->repertory[lindex].get_last_name() << std::endl  << "Nickname:		" << this->repertory[lindex].get_nickname() << std::endl << "Phone number:		" << this->repertory[lindex].get_phone_number() << std::endl << "Secret:			" << this->repertory[lindex].get_secret() << std::endl;

}

void	PhoneBook::print(Contact contact)
{
	if (!contact.get_first_name().size())
	{
		std::cout << "	Contact not found" << std::endl;
		return;
	}
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
	std::cout << "Secret: " << contact.get_secret() << std::endl;
}

std::string		PhoneBook::truncate(std::string str) 
{
    if (str.length() > 10) 
    {
        return str.substr(0, 10 - 1) + "."; 
    }
    return str;
}