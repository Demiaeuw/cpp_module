/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:15:45 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:39:51 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include "Serializer.hpp"

int main() {
	DataPacket myData;
	myData.name = "Hello, 42!";
	myData.value = 1337;

	std::cout << "🟢 Données originales : " << std::endl;
	std::cout << " - Adresse : " << &myData << std::endl;
	std::cout << " - Name : " << myData.name << std::endl;
	std::cout << " - Value : " << myData.value << std::endl;

	// Sérialisation
	uintptr_t raw = Serializer::serialize(&myData);
	std::cout << "\n🔵 Adresse après sérialisation : " << raw << std::endl;

	// Désérialisation
	DataPacket* newData = Serializer::deserialize(raw);
	std::cout << "\n🟣 Données après désérialisation : " << std::endl;
	std::cout << " - Adresse : " << newData << std::endl;
	std::cout << " - Name : " << newData->name << std::endl;
	std::cout << " - Value : " << newData->value << std::endl;

	// Vérification
	if (newData == &myData) {
		std::cout << "\n✅ Succès : Le pointeur désérialisé correspond à l'original !" << std::endl;
	} else {
		std::cout << "\n❌ Erreur : Mauvaise conversion !" << std::endl;
	}

	return 0;
}
