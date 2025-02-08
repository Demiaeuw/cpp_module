/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:31:01 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 07:46:59 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// non const
template <typename T>
void iter(T *array, size_t len, void (*f)(T &)) {
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

// const
template <typename T>
void iter(T const *array, size_t len, void (*f)(T const &)) {
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}
