#include <iostream>
#include <iomanip>
#include <string>

double payRate(char jobCode) {
    switch (jobCode) {
        case 'L':
        case 'l':
            return 25.0;
        case 'A':
        case 'a':
            return 30.0;
        case 'J':
        case 'j':
            return 50.0;
        default:
            return 0.0;
    }
}

double grossPay(double hoursWorked, double rate) {
    const double overtimeThreshold = 40.0;
    if (hoursWorked <= overtimeThreshold) {
        return hoursWorked * rate;
    }
    double regularPay = overtimeThreshold * rate;
    double overtimeHours = hoursWorked - overtimeThreshold;
    double overtimePay = overtimeHours * rate * 1.5;
    return regularPay + overtimePay;
}

int main() {
    using namespace std;

    cout << "Enter last name, job code (L, A, or J), and hours worked\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    string lastName;
    char jobCode;
    double hours;

    double totalGrossPay = 0.0;

    while (cin >> lastName >> jobCode >> hours) {
        double rate = payRate(jobCode);
        double gross = grossPay(hours, rate);

        cout << fixed << setprecision(2);
        cout << "Last name: " << lastName
             << "  Gross pay: " << gross << '\n';

        totalGrossPay += gross;
    }

    cout << "\nTotal gross pay: " << fixed << setprecision(2) << totalGrossPay << '\n';

    return 0;
}
