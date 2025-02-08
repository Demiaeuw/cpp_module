/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:16:14 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 07:25:32 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template	<typename T>
void	swap(T& a, T& b) {
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template	<typename T>
T const& min(T const& a, T const& b) {
	return (a < b ? a : b);
}

template	<typename T>
T const& max(T const& a, T const& b) {
	return (a > b ? a : b);
}
