#include <iostream>
#include <iomanip>

const double SALES_TAX_RATE = 0.07;

void computeWidgetOrder(int numWidgets,
                        double& costPerWidget,
                        double& extendedPrice,
                        double& salesTax,
                        double& totalOrder) {
    if (numWidgets >= 10000) {
        costPerWidget = 4.00;
    } else if (numWidgets >= 5000) {
        costPerWidget = 5.00;
    } else {
        costPerWidget = 10.00;
    }

    extendedPrice = numWidgets * costPerWidget;
    salesTax = extendedPrice * SALES_TAX_RATE;
    totalOrder = extendedPrice + salesTax;
}

int main() {
    using namespace std;

    cout << "Enter number of widgets (Ctrl+Z then Enter to stop):\n";

    double sumTotalOrders = 0.0;
    int numWidgets;

    while (cin >> numWidgets) {
        double costPerWidget = 0.0;
        double extendedPrice = 0.0;
        double salesTax = 0.0;
        double totalOrder = 0.0;

        computeWidgetOrder(numWidgets, costPerWidget, extendedPrice,
                           salesTax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Widgets: " << numWidgets
             << "  Cost/widget: " << costPerWidget
             << "  Extended: " << extendedPrice
             << "  Sales tax: " << salesTax
             << "  Total order: " << totalOrder << '\n';

        sumTotalOrders += totalOrder;
    }

    cout << "\nSum of all total orders: " << fixed << setprecision(2)
         << sumTotalOrders << '\n';

    return 0;
}
