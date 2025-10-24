#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите коэффициенты a, b, c: ";
    std::cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (d >= 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else {
        std::cout << "Уравнение не имеет вещественных корней." << std::endl;
    }
    return 0;
}
