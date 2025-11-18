

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, x, epsilon;
    std::cout << "Введите a, x, epsilon: ";
    std::cin >> a >> x >> epsilon;

    double y_prev = a; // Предполагаем y0 = a
    double y_curr;

    while (true) {
        y_curr = 0.5 * std::abs(y_prev + x / y_prev); // Используем y_prev вместо y_prev - 1
        if (std::abs(y_curr * y_curr - y_prev * y_prev) < epsilon) {
            break;
        }
        y_prev = y_curr;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Первый член, удовлетворяющий условию: " << y_curr << std::endl;

    return 0;
}
