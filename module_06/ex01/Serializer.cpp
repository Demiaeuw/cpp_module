/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:15:49 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:39:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::Serializer(const Serializer& copy) {
	*this = copy;
}
Serializer::~Serializer() {}
Serializer& Serializer::operator=(Serializer const &copy) {
	(void)copy;
	return *this;
}


uintptr_t Serializer::serialize(DataPacket* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

DataPacket* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<DataPacket*>(raw);
}