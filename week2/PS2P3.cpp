#include <iostream>

int main() {
    double length;
    double width;

    std::cout << "Enter length: ";
    std::cin >> length;

    std::cout << "Enter width: ";
    std::cin >> width;

    double area = length * width;
    double circumference = 2 * length + 2 * width;

    std::cout << "Area: " << area << "\n";
    std::cout << "Circumference: " << circumference << "\n";

    return 0;
}