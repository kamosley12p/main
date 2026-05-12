#include <iostream>
#include <string>

using namespace std;

void displayAutos(const string makes[], const string models[], int size) {
    cout << "\nAutos entered:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Auto " << (i + 1) << ": " << makes[i] << " " << models[i] << '\n';
    }
}

int main() {
    int numAutos;

    cout << "How many autos do you want to enter? ";
    cin >> numAutos;

    while (numAutos <= 0) {
        cout << "Please enter a number greater than 0: ";
        cin >> numAutos;
    }

    string* makes = new string[numAutos];
    string* models = new string[numAutos];

    for (int i = 0; i < numAutos; ++i) {
        cout << "\nEnter make for auto " << (i + 1) << ": ";
        cin >> makes[i];
        cout << "Enter model for auto " << (i + 1) << ": ";
        cin >> models[i];
    }

    displayAutos(makes, models, numAutos);

    delete[] makes;
    delete[] models;

    return 0;
}
