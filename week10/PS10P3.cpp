#include <iostream>
#include <iomanip>
#include <string>

const double TUITION_PER_CREDIT_HOUR = 250.0;

void computeTuition(double creditHours, double financialAid,
                    double& tuition, double& tuitionOwed) {
    tuition = creditHours * TUITION_PER_CREDIT_HOUR;
    tuitionOwed = tuition - financialAid;
}

int main() {
    using namespace std;

    cout << "Enter last name, credit hours, and financial aid "
            "(Ctrl+Z then Enter to stop):\n";

    double sumTuitionOwed = 0.0;
    int entryCount = 0;

    string lastName;
    double creditHours;
    double financialAid;

    while (cin >> lastName >> creditHours >> financialAid) {
        double tuition = 0.0;
        double tuitionOwed = 0.0;

        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << fixed << setprecision(2);
        cout << lastName << "  Tuition: " << tuition
             << "  Tuition owed: " << tuitionOwed << '\n';

        sumTuitionOwed += tuitionOwed;
        ++entryCount;
    }

    cout << '\n' << fixed << setprecision(2);
    cout << "Total tuition owed by all students: " << sumTuitionOwed << '\n';
    cout << "Number of entries: " << entryCount << '\n';

    if (entryCount > 0) {
        double averageOwed = sumTuitionOwed / entryCount;
        cout << "Average amount owed: " << averageOwed << '\n';
    } else {
        cout << "Average amount owed: (no entries)\n";
    }

    return 0;
}
