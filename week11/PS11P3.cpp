#include <fstream>
#include <iomanip>
#include <iostream>

double mpg(double gallons, double miles) {
    return miles / gallons;
}

int main() {
    using namespace std;

    ifstream in("trips.txt");
    if (!in) {
        cerr << "Could not open trips.txt\n";
        return 1;
    }

    double gallons = 0.0;
    double miles = 0.0;

    double sumGallons = 0.0;
    double sumMiles = 0.0;

    cout << fixed << setprecision(2);

    while (in >> gallons >> miles) {
        double tripMpg = mpg(gallons, miles);

        cout << "Gallons: " << gallons
             << "  Miles: " << miles
             << "  MPG: " << tripMpg << '\n';

        sumGallons += gallons;
        sumMiles += miles;
    }

    cout << "Sum of gallons: " << sumGallons << '\n';
    cout << "Sum of miles travelled: " << sumMiles << '\n';

    return 0;
}
