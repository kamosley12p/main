#include <array>
#include <fstream>
#include <iostream>
#include <string>

const int CITY_COUNT = 8;

bool readCities(const std::string& filename,
                std::array<std::string, CITY_COUNT>& cities,
                std::array<long long, CITY_COUNT>& populations) {
    std::ifstream in(filename);
    if (!in) {
        return false;
    }

    for (int i = 0; i < CITY_COUNT; ++i) {
        if (!(in >> cities[i] >> populations[i])) {
            return false;
        }
    }

    return true;
}

void displayCities(const std::array<std::string, CITY_COUNT>& cities,
                   const std::array<long long, CITY_COUNT>& populations) {
    using namespace std;
    for (int i = 0; i < CITY_COUNT; ++i) {
        cout << cities[i] << ' ' << populations[i] << '\n';
    }
}

int sequentialSearchCity(const std::array<std::string, CITY_COUNT>& cities,
                         const std::string& key) {
    for (int i = 0; i < CITY_COUNT; ++i) {
        if (cities[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    using namespace std;

    array<string, CITY_COUNT> cities;
    array<long long, CITY_COUNT> populations;

    const string inputFile = "PS12P2.txt";
    if (!readCities(inputFile, cities, populations)) {
        cerr << "Could not open or read " << inputFile << '\n';
        return 1;
    }

    displayCities(cities, populations);
    cout << '\n';

    while (true) {
        cout << "Enter city name, ctl+z to stop: ";

        string city;
        if (!getline(cin, city)) {
            break; // Ctrl+Z (EOF)
        }

        if (city.empty()) {
            continue;
        }

        int pos = sequentialSearchCity(cities, city);
        if (pos >= 0) {
            cout << cities[pos] << " has a population of " << populations[pos] << '\n';
        } else {
            cout << city << " not found\n";
        }
    }

    cout << "\nGoodbye. Have a nice day.\n";
    return 0;
}
