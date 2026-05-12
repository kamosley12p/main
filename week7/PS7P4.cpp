#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

int main() {
    using namespace std;

    string lastName;
    char jobCode;
    double hoursWorked;

    double totalPay = 0.0;
    int entryCount = 0;

    cout << "Enter last name, job code (L, A, J), and hours worked\n"
         << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> lastName >> jobCode >> hoursWorked) {
        jobCode = static_cast<char>(toupper(static_cast<unsigned char>(jobCode)));

        double rate = 0.0;
        if (jobCode == 'L') {
            rate = 25.0;
        } else if (jobCode == 'A') {
            rate = 30.0;
        } else if (jobCode == 'J') {
            rate = 50.0;
        }

        double regularHours = hoursWorked;
        double overtimeHours = 0.0;
        if (hoursWorked > 40.0) {
            regularHours = 40.0;
            overtimeHours = hoursWorked - 40.0;
        }

        double pay = (regularHours * rate) + (overtimeHours * rate * 1.5);

        totalPay += pay;
        ++entryCount;

        cout << fixed << setprecision(2);
        cout << "\nLast name: " << lastName
             << "\nJob code: " << jobCode
             << "\nHours worked: " << hoursWorked
             << "\nPay: $" << pay
             << "\n";
    }

    cout << fixed << setprecision(2);
    if (entryCount > 0) {
        double averagePay = totalPay / entryCount;
        cout << "\nAverage pay: $" << averagePay;
    } else {
        cout << "\nNo entries made.";
    }

    cout << "\nNumber of entries made: " << entryCount << '\n';

    return 0;
}

