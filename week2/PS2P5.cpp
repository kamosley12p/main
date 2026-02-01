#include <iostream>

int main() {
    double price;
    double discountPercent;

    std::cout << "Enter price of item: ";
    std::cin >> price;

    std::cout << "Enter discount percent (decimal form, e.g. 0.10 for 10%): ";
    std::cin >> discountPercent;

    double discountAmount = price * discountPercent;
    double discountedPrice = price - discountAmount;

    std::cout << "Discount amount: " << discountAmount << "\n";
    std::cout << "Discounted price: " << discountedPrice << "\n";

    return 0;
}