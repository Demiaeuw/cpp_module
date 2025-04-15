/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:58 by acabarba          #+#    #+#             */
/*   Updated: 2025/04/15 14:50:06 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <vector>
#include <algorithm>
#include <exception>

class Span {
private:
	unsigned int				_maxSize;
	std::vector<int>			_numbers;
	void _checkSpanPossible() 	const;
	
public:
    // Canonical form
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    // Member functions
    void addNumber(int number);
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    int shortestSpan() const;
    int longestSpan() const;

   
};
