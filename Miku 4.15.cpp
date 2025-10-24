#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите коэффициенты a, b, c: ";
    std::cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (d >= 0) {
        std::cout << "Уравнение имеет вещественные корни." << std::endl;
    } else {
        std::cout << "Уравнение не имеет вещественных корней." << std::endl;
    }
    return 0;
}
