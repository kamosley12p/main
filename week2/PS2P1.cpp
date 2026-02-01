#include <iostream>

int main() {
    int quantity;
    double unitPrice;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    std::cout << "Enter unit price (price per item): ";
    std::cin >> unitPrice;

    double extendedPrice = quantity * unitPrice;

    std::cout << "Extended price: " << extendedPrice << "\n";

    return 0;
}