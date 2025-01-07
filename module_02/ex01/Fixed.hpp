/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:07:48 by acabarba          #+#    #+#             */
/*   Updated: 2025/01/07 14:09:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
	Fixed();                          // Constructeur par défaut
    Fixed(const int value);           // Constructeur avec un entier
    Fixed(const float value);         // Constructeur avec un flottant
    Fixed(const Fixed &other);        // Constructeur de recopie
    ~Fixed();                         // Destructeur

    Fixed &operator=(const Fixed &other); // Opérateur d’affectation

    int getRawBits(void) const;       // Récupérer la valeur brute
    void setRawBits(int const raw);   // Définir la valeur brute
    float toFloat(void) const;        // Convertir en flottant
    int toInt(void) const;            // Convertir en entier
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
