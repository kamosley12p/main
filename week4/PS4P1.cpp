#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extendedPrice, tax, total;

    cout << "Enter quantity of item: ";
    cin >> quantity;

    if (quantity >= 1000) {
        unitPrice = 3.00;
    } else {
        unitPrice = 5.00;
    }

    extendedPrice = quantity * unitPrice;
    tax = extendedPrice * 0.07;
    total = extendedPrice + tax;

    cout << fixed << setprecision(2);
    cout << "\nQuantity:      " << quantity << endl;
    cout << "Unit price:    $" << unitPrice << endl;
    cout << "Extended price: $" << extendedPrice << endl;
    cout << "Tax (7%):      $" << tax << endl;
    cout << "Total:         $" << total << endl;

    return 0;
}
