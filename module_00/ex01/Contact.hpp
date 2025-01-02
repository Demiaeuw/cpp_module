/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:42:07 by acabarba          #+#    #+#             */
/*   Updated: 2024/12/31 17:37:40 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string	secret;

	public:
		Contact();
		~Contact();

		std::string	get_first_name();
		void		set_first_name(std::string str);
		
		std::string	get_last_name();
		void		set_last_name(std::string str);
		
		std::string	get_nickname();
		void		set_nickname(std::string str);

		std::string	get_phone_number();
		void		set_phone_number(std::string str);
		
		std::string	get_secret();
		void		set_secret(std::string str);
};

#endif