/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:53:25 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/26 02:41:16 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	private:
		int                 _fixedPointValue; 		// Valeur brute en virgule fixe
		static const int    _fractionalBits = 8; 	// Nombre de bits pour la partie fractionnaire

	public:
		Fixed();									// Constructeur par défaut
		Fixed(const Fixed &other);					// Constructeur de recopie
		~Fixed();									// Destructeur
		Fixed &operator=(const Fixed &other);		// Opérateur d’affectation

		int getRawBits(void) const;					// Récupérer la valeur brute
		void setRawBits(int const raw);				// Définir la valeur brute
};
