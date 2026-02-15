#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char item;
    int quantity;
    double unitPrice, extendedPrice;

    cout << "Enter item (A or B): ";
    cin >> item;

    cout << "Enter quantity: ";
    cin >> quantity;

    if (item == 'A' || item == 'a') {
        unitPrice = 10.00;
    } else if (item == 'B' || item == 'b') {
        unitPrice = 20.00;
    } else {
        cout << "Unknown item. Valid items are A ($10.00) and B ($20.00)." << endl;
        return 1;
    }

    extendedPrice = quantity * unitPrice;

    cout << fixed << setprecision(2);
    cout << "\nItem:          " << item << endl;
    cout << "Unit price:    $" << unitPrice << endl;
    cout << "Extended price: $" << extendedPrice << endl;

    return 0;
}
