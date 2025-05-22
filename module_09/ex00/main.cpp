#include "BitcoinExchange.hpp"


int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange exchange;

    // Charger la base de données fournie (tu peux adapter le nom si besoin)
    exchange.loadDatabase("data.csv");

    // Traiter le fichier utilisateur passé en argument
    exchange.processInputFile(argv[1]);

    return 0;
}
