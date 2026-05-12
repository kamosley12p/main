#include <iostream>
#include <iomanip>

double getUnitPrice(char productCode) {
    switch (productCode) {
        case 'W':
            return 10.0;
        case 'C':
            return 15.0;
        case 'G':
            return 20.0;
        default:
            return 0.0;
    }
}

double getShipping(char productCode) {
    switch (productCode) {
        case 'W':
            return 2.0;
        case 'C':
            return 5.0;
        case 'G':
            return 7.0;
        default:
            return 0.0;
    }
}

int main() {
    using namespace std;

    char productCode;
    int quantity;

    double grandTotal = 0.0;

    cout << "Enter product code (W, C, or G) and quantity for each order\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> productCode >> quantity) {
        double unitPrice = getUnitPrice(productCode);
        double shipping = getShipping(productCode);
        double extendedPrice = quantity * unitPrice;
        double orderTotal = extendedPrice + shipping;

        cout << fixed << setprecision(2);
        cout << "Product code: " << productCode
             << "  Unit price: $" << unitPrice
             << "  Shipping: $" << shipping
             << "  Extended price: $" << extendedPrice
             << "  Order total: $" << orderTotal << '\n';

        grandTotal += orderTotal;
    }

    cout << '\n';
    cout << "Total of all orders: $" << fixed << setprecision(2) << grandTotal << '\n';

    return 0;
}
