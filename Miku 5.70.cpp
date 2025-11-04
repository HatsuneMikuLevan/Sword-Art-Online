

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x;
    int n;
    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Введите натуральное число n (1 <= n <= 10): ";
    std::cin >> n;
    double total_sum = 1.0;
    double term = 1.0;
    for (int i = 1; i <= n; ++i) {
        term *= x / i;
        total_sum += term;
    }
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Сумма ряда равна: " << total_sum << std::endl;
    return 0;
}
