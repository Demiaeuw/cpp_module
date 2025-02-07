/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:04:24 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/07 21:25:36 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <cstdlib>  // Pour strtol et strtod

ScalarConvert::ScalarConvert() {}

ScalarConvert::~ScalarConvert() {}

ScalarConvert& ScalarConvert::operator=(const ScalarConvert &copy) {
    (void)copy;
    return *this;
}

// Tester
bool ScalarConvert::isChar(const std::string &a) {
    return (a.size() == 1 && std::isprint(a[0]) && !std::isdigit(a[0]));
}

bool ScalarConvert::isInt(const std::string &a) {
    if (a.empty()) return false;
    
    size_t i = 0;
    if (a[i] == '+' || a[i] == '-') i++;
    if (i == a.size()) return false;

    for (; i < a.size(); i++) {
        if (!std::isdigit(a[i])) return false;
    }

    char *endptr;
    long num = std::strtol(a.c_str(), &endptr, 10);

    return (*endptr == '\0' && num >= INT_MIN && num <= INT_MAX);
}

bool ScalarConvert::isFloat(const std::string &a) {
    if (a.empty()) return false;
    
    if (a == "nanf" || a == "+inff" || a == "-inff") return true;

    size_t i = 0;
    bool hasDot = false, hasDigit = false;
    
    if (a[i] == '+' || a[i] == '-') i++;
    
    for (; i < a.size(); i++) {
        if (std::isdigit(a[i])) {
            hasDigit = true;
        } else if (a[i] == '.') {
            if (hasDot) return false;
            hasDot = true;
        } else if (a[i] == 'f' && i == a.size() - 1) {
            return hasDigit;
        } else {
            return false;
        }
    }
    return false;
}

bool ScalarConvert::isDouble(const std::string &a) {
    if (a.empty()) return false;

    if (a == "nan" || a == "+inf" || a == "-inf") return true;

    size_t i = 0;
    bool hasDot = false, hasDigit = false;
    
    if (a[i] == '+' || a[i] == '-') i++;

    for (; i < a.size(); i++) {
        if (std::isdigit(a[i])) {
            hasDigit = true;
        } else if (a[i] == '.') {
            if (hasDot) return false;
            hasDot = true;
        } else {
            return false;
        }
    }
    return hasDigit && hasDot;
}

// Member fonctions
void ScalarConvert::convertToChar(const std::string &a) {
    int value;

    if (isChar(a)) {
        std::cout << "char: '" << a[0] << "'" << std::endl;
        return;
    }
    if (!isInt(a)) {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    value = std::strtol(a.c_str(), NULL, 10);
    if (value < 0 || value > 255) {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (!std::isprint(value)) {
        std::cout << "char: Non displayable" << std::endl;
        return;
    }

    std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConvert::convertToInt(const std::string &a) {
    if (isChar(a)) {
        std::cout << "int: " << static_cast<int>(a[0]) << std::endl;
        return;
    }
    if (!isInt(a)) {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    
    int value = std::strtol(a.c_str(), NULL, 10);
    std::cout << "int: " << value << std::endl;
}

void ScalarConvert::convertToFloat(const std::string &a) {
    if (a == "nan" || a == "+inf" || a == "-inf" || a == "nanf" || a == "+inff" || a == "-inff") {
        std::cout << "float: " << a << "f" << std::endl;
        return;
    }
    if (isChar(a)) {
        std::cout << "float: " << static_cast<float>(a[0]) << ".0f" << std::endl;
        return;
    }

    float value = std::strtod(a.c_str(), NULL);
    std::cout << "float: " << value;
    if (value == static_cast<int>(value)) std::cout << ".0";
    std::cout << "f" << std::endl;
}

void ScalarConvert::convertToDouble(const std::string &a) {
    if (a == "nan" || a == "+inf" || a == "-inf" || a == "nanf" || a == "+inff" || a == "-inff") {
        std::cout << "double: " << a.substr(0, a.size() - (a[a.size() - 1] == 'f' ? 1 : 0)) << std::endl;
        return;
    }
    if (isChar(a)) {
        std::cout << "double: " << static_cast<double>(a[0]) << ".0" << std::endl;
        return;
    }

    double value = std::strtod(a.c_str(), NULL);
    std::cout << "double: " << value;
    if (value == static_cast<int>(value)) std::cout << ".0";
    std::cout << std::endl;
}

void ScalarConvert::convertTo(const std::string &a) {
    convertToChar(a);
    convertToInt(a);
    convertToFloat(a);
    convertToDouble(a);
}
