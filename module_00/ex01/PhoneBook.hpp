/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:44:51 by acabarba          #+#    #+#             */
/*   Updated: 2024/12/31 17:51:57 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact repertory[8];
		int		index;
	
	public:
		PhoneBook();
		~PhoneBook();

		void		add();
		void		search();
		void		print_index();
		void		print(Contact contact);
		std::string	truncate(std::string str);
		
};

#endif