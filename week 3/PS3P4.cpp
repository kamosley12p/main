#include <iostream>
using namespace std;

int main() {
    double purchasePrice, currentPrice;

    cout << "Enter purchase price of stock: $";
    cin >> purchasePrice;

    cout << "Enter current price of stock: $";
    cin >> currentPrice;

    double percentChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;

    if (percentChange >= 0) {
        cout << "Percentage increase: " << percentChange << "%" << endl;
    } else {
        cout << "Percentage decrease: " << -percentChange << "%" << endl;
    }

    return 0;
}
