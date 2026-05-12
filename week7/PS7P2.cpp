#include <iostream>
#include <iomanip>
#include <string>

int main() {
    using namespace std;

    string lastName;
    int hits;
    int atBats;
    int playerCount = 0;

    cout << "Enter last name, hits, and at bats (Ctrl+Z then Enter to stop):\n";

    while (cin >> lastName >> hits >> atBats) {
        double battingAverage = 0.0;
        if (atBats != 0) {
            battingAverage = static_cast<double>(hits) / atBats;
        }

        ++playerCount;

        cout << fixed << setprecision(3);
        cout << "\nPlayer: " << lastName
             << "\nBatting average: " << battingAverage
             << "\n";
    }

    cout << "\nNumber of players entered: " << playerCount << '\n';

    return 0;
}

