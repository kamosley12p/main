#include <iostream>
using namespace std;

int main() {
    double price, quantity;

    cout << "Enter current stock price: $";
    cin >> price;

    cout << "Enter quantity of stock: ";
    cin >> quantity;

    double value = price * quantity;

    cout << "Current portfolio value: $" << value << endl;

    return 0;
}
