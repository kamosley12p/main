#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee {
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

double computeGrossPay(double hours, double rate) {
    if (hours > 40.0) {
        double regularPay = 40.0 * rate;
        double overtimePay = (hours - 40.0) * (rate * 1.5);
        return regularPay + overtimePay;
    }
    return hours * rate;
}

int main() {
    int n;
    cout << "How many employees do you want to enter? ";
    cin >> n;

    while (n <= 0) {
        cout << "Please enter a number greater than 0: ";
        cin >> n;
    }

    vector<Employee> employees(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nEmployee " << (i + 1) << '\n';
        cout << "First name: ";
        cin >> employees[i].firstName;
        cout << "Last name: ";
        cin >> employees[i].lastName;
        cout << "Hours worked: ";
        cin >> employees[i].hours;
        cout << "Hourly rate: ";
        cin >> employees[i].rate;

        employees[i].grossPay = computeGrossPay(employees[i].hours, employees[i].rate);
    }

    cout << fixed << setprecision(2);
    cout << "\nEmployee Payroll Data:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Employee " << (i + 1) << ": "
             << employees[i].firstName << ' ' << employees[i].lastName
             << ", Hours: " << employees[i].hours
             << ", Rate: $" << employees[i].rate
             << ", Gross Pay: $" << employees[i].grossPay << '\n';
    }

    return 0;
}
