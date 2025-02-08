/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:17:30 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 06:23:59 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <climits>

class ScalarConvert {
   private:
// Constructor / destructor
	ScalarConvert();
	ScalarConvert(const ScalarConvert& copy);
	~ScalarConvert();
// Assignment operator
	ScalarConvert& operator=(const ScalarConvert& copy);
	
   protected:
	

   public:
// Tester
	static bool	isChar(const std::string &a);
	static bool isInt(const std::string &a);
	static bool isFloat(const std::string &a);
	static bool isDouble(const std::string &a);

// Member fonctions
	static void convertToChar(const std::string &a);
	static void convertToInt(const std::string &a);
	static void convertToFloat(const std::string &a);
	static void convertToDouble(const std::string &a);
	static void convertTo(const std::string &a);
};
