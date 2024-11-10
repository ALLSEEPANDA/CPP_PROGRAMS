#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream countryFile("Country"), capitalFile("Capitals");
    countryFile << "USA\nCanada\nFrance\nGermany\n";
    capitalFile << "Washington\nOttawa\nParis\nBerlin\n";
    countryFile.close();
    capitalFile.close();

    std::ifstream readCountry("Country"), readCapital("Capitals");
    std::string country, capital;

    while (std::getline(readCountry, country) && std::getline(readCapital, capital)) {
        std::cout << country << " - " << capital << std::endl;
    }

    readCountry.close();
    readCapital.close();
    return 0;
}