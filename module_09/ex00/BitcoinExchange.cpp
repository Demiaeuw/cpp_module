#include "BitcoinExchange.hpp"

// ------------------ Canonical Form ------------------

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _exchangeRates(other._exchangeRates) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->_exchangeRates = other._exchangeRates;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

// ------------------ Load CSV Database ------------------

void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: could not open database file." << std::endl;
        std::exit(1);
    }

    std::string line;
    std::getline(file, line); // skip header
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, valueStr;

        if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr)) {
            continue;
        }

        float value = static_cast<float>(std::atof(valueStr.c_str()));
        _exchangeRates[date] = value;
    }
}

// ------------------ Process Input File ------------------

void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // skip header
    while (std::getline(file, line)) {
        parseAndProcessLine(line);
    }
}

// ------------------ Line Parsing and Processing ------------------

void BitcoinExchange::parseAndProcessLine(const std::string& line) {
    std::stringstream ss(line);
    std::string date, valueStr;

    if (!std::getline(ss, date, '|') || !std::getline(ss, valueStr)) {
        std::cerr << "Error: bad input => " << line << std::endl;
        return;
    }

    date.erase(date.find_last_not_of(" \t\r\n") + 1);
    date.erase(0, date.find_first_not_of(" \t\r\n"));
    valueStr.erase(valueStr.find_last_not_of(" \t\r\n") + 1);
    valueStr.erase(0, valueStr.find_first_not_of(" \t\r\n"));

    float value;
    if (!isValidDate(date)) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return;
    }
    if (!isValidValue(valueStr, value)) {
        return;
    }

    float rate = getRateForDate(date);
    std::cout << date << " => " << value << " = " << rate * value << std::endl;
}

// ------------------ Validations ------------------

bool BitcoinExchange::isValidDate(const std::string& date) const {
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        return false;
    }

    int y, m, d;
    std::sscanf(date.c_str(), "%d-%d-%d", &y, &m, &d);
    if (y < 2009 || m < 1 || m > 12 || d < 1 || d > 31) {
        return false;
    }

    return true;
}

bool BitcoinExchange::isValidValue(const std::string& valueStr, float& value) const {
    std::stringstream ss(valueStr);
    ss >> value;

    if (ss.fail() || !ss.eof()) {
        std::cerr << "Error: bad input => " << valueStr << std::endl;
        return false;
    }

    if (value < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }

    return true;
}

// ------------------ Recherche de taux ------------------

float BitcoinExchange::getRateForDate(const std::string& date) const {
    std::map<std::string, float>::const_iterator it = _exchangeRates.lower_bound(date);

    if (it != _exchangeRates.end() && it->first == date) {
        return it->second;
    }

    if (it == _exchangeRates.begin()) {
        return 0.0f;
    }

    --it;
    return it->second;
}
