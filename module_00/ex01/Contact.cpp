/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:48:40 by acabarba          #+#    #+#             */
/*   Updated: 2024/12/31 14:16:03 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string		Contact::get_first_name()
{
	return this->firstName;
}

void			Contact::set_first_name(std::string str)
{
	this->firstName = str;
}

std::string		Contact::get_last_name()
{
	return this->lastName;
}

void			Contact::set_last_name(std::string str)
{
	this->lastName = str;
}

std::string		Contact::get_nickname()
{
	return this->nickName;
}

void			Contact::set_nickname(std::string str)
{
	this->nickName = str;
}

std::string		Contact::get_phone_number()
{
	return this->phoneNumber;
}

void			Contact::set_phone_number(std::string str)
{
	this->phoneNumber = str;
}

std::string		Contact::get_secret()
{
	return this->secret;
}

void			Contact::set_secret(std::string str)
{
	this->secret = str;
}
