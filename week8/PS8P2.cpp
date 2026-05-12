#include <iostream>
#include <iomanip>
#include <string>

double calculatePay(char jobCode, double hours) {
    double rate = 0.0;
    switch (jobCode) {
        case 'L':
            rate = 25.0;
            break;
        case 'A':
            rate = 30.0;
            break;
        case 'J':
            rate = 50.0;
            break;
        default:
            rate = 0.0;
            break;
    }

    if (hours <= 40.0) {
        return hours * rate;
    }
    return 40.0 * rate + (hours - 40.0) * rate * 1.5;
}

int main() {
    using namespace std;

    string lastName;
    char jobCode;
    double hours;

    double totalPay = 0.0;
    int entryCount = 0;

    cout << "Enter last name, job code (L, A, or J), and hours worked for each employee\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> lastName >> jobCode >> hours) {
        double pay = calculatePay(jobCode, hours);

        cout << fixed << setprecision(2);
        cout << "Last name: " << lastName << "  Pay: $" << pay << '\n';

        totalPay += pay;
        ++entryCount;
    }

    cout << '\n';
    cout << "Total pay (all employees): $" << fixed << setprecision(2) << totalPay << '\n';

    if (entryCount > 0) {
        double averagePay = totalPay / static_cast<double>(entryCount);
        cout << "Average pay: $" << fixed << setprecision(2) << averagePay << '\n';
    } else {
        cout << "Average pay: $0.00\n";
    }

    cout << "Number of entries: " << entryCount << '\n';

    return 0;
}
