/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:14:43 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:32:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>
#include <string>


struct DataPacket {
	std::string	name;
	int			value;
};

class Serializer {
   private:
// Constructor / destructor
	   Serializer();
	   Serializer(const Serializer& copy);
	   ~Serializer();
// Assignment operator
	   Serializer& operator=(const Serializer& copy);

   protected:
	

   public:
// Member fonctions
	static uintptr_t serialize(DataPacket* ptr);
	static DataPacket* deserialize(uintptr_t raw);
};
