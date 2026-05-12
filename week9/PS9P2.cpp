#include <iostream>
#include <iomanip>
#include <string>

double battingAverage(int hits, int atBats) {
    if (atBats == 0) {
        return 0.0;
    }
    return static_cast<double>(hits) / static_cast<double>(atBats);
}

int main() {
    using namespace std;

    cout << "Enter last name, hits, and at bats for each player\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    string lastName;
    int hits;
    int atBats;
    int playerCount = 0;

    while (cin >> lastName >> hits >> atBats) {
        double avg = battingAverage(hits, atBats);

        cout << fixed << setprecision(3);
        cout << "Last name: " << lastName
             << "  Batting average: " << avg << '\n';

        ++playerCount;
    }

    cout << "\nNumber of players entered: " << playerCount << '\n';

    return 0;
}
