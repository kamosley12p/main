#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    char status;

    cout << "Enter quantity of widgets: ";
    cin >> quantity;
    cout << "Enter customer status (A, B, C, or D): ";
    cin >> status;

    double unitPrice;

    if (quantity > 10000) {
        if (status == 'A')
            unitPrice = 10.00;
        else if (status == 'B')
            unitPrice = 12.00;
        else
            unitPrice = 30.00;  // status C or D with >10000 not in table; use default or ask
    }
    else if (quantity >= 5000 && quantity <= 10000) {
        if (status == 'C')
            unitPrice = 20.00;
        else if (status == 'D')
            unitPrice = 22.00;
        else
            unitPrice = 30.00;  // status A or B in this range: table says "5000 to 10000 C/D"
    }
    else {
        unitPrice = 30.00;  // below 5000, any status
    }

    double extendedPrice = quantity * unitPrice;
    double taxRate = 0.07;
    double taxAmount = extendedPrice * taxRate;
    double total = extendedPrice + taxAmount;

    cout << fixed << setprecision(2);
    cout << "\nExtended price: $" << extendedPrice << endl;
    cout << "Tax (7%):       $" << taxAmount << endl;
    cout << "Total:          $" << total << endl;

    return 0;
}
