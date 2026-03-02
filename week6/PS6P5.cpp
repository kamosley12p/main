#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char jobCode;
    double hours;

    cout << "Enter job code (L, J, or A): ";
    cin >> jobCode;
    cout << "Enter hours worked: ";
    cin >> hours;

    double rate;

    if (jobCode == 'L' || jobCode == 'l') {
        if (hours > 40)
            rate = 50.00;
        else
            rate = 40.00;
    }
    else if (jobCode == 'J' || jobCode == 'j') {
        if (hours > 60)
            rate = 100.00;
        else
            rate = 75.00;
    }
    else if (jobCode == 'A' || jobCode == 'a') {
        if (hours > 40)
            rate = 25.00;
        else
            rate = 20.00;
    }
    else {
        rate = 0.00;  // invalid job code
    }

    double grossPay = hours * rate;

    cout << fixed << setprecision(2);
    cout << "\nRate of pay: $" << rate << endl;
    cout << "Gross salary: $" << grossPay << endl;

    return 0;
}
