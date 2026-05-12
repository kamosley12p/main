#include <iostream>
#include <iomanip>
#include <string>

int main() {
    using namespace std;

    string destination;
    double miles;
    double gallons;

    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination, miles travelled, and gallons used\n"
         << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> destination >> miles >> gallons) {
        double mpg = 0.0;
        if (gallons != 0.0) {
            mpg = miles / gallons;
        }

        totalMiles += miles;
        ++tripCount;

        cout << fixed << setprecision(2);
        cout << "\nDestination: " << destination
             << "\nMiles per gallon: " << mpg
             << "\n";
    }

    cout << "\nTotal miles travelled: " << fixed << setprecision(2) << totalMiles
         << "\nNumber of trips made: " << tripCount << '\n';

    return 0;
}

