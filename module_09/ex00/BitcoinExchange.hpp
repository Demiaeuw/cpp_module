#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <limits>
#include <iomanip>

class BitcoinExchange {
public:
    // Forme canonique
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

    // Méthodes principales
    void loadDatabase(const std::string& filename);
    void processInputFile(const std::string& filename);

private:
    std::map<std::string, float> _exchangeRates;

    // Méthodes utilitaires
    bool isValidDate(const std::string& date) const;
    bool isValidValue(const std::string& valueStr, float& value) const;
    float getRateForDate(const std::string& date) const;

    void parseAndProcessLine(const std::string& line);
};

#endif
