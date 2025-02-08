/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:56:47 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 08:42:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template	<typename T>
class Array {
   private:
	T* _data;
	size_t	_size;

   protected:
	

   public:
// Constructor / destructor
	Array();
	Array(size_t n);
	Array(const Array& copy);
	~Array();

// Assignment operator
	Array& operator=(const Array& copy);

// Getteur
	size_t getSize() const;
// Member fonctions
	T& operator[](size_t index);
	const T& operator[](size_t index) const;
};

#include "Array.tpp"

#endif
