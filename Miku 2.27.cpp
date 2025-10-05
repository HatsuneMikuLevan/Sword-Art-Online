#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, h;
    std::cout << "Введите основания и высоту равнобедренной трапеции: ";
    std::cin >> a >> b >> h;

    double c = std::sqrt(h * h + std::pow(std::abs(a - b) / 2.0, 2));
    double perimeter = a + b + 2 * c;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Периметр трапеции: " << perimeter << std::endl;

    return 0;
}
