

#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n (1 <= n <= 10): ";
    std::cin >> n;
    double total_sum = 1.0;
    double factorial = 1.0;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        total_sum += 1.0 / factorial;
    }
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Сумма ряда равна: " << total_sum << std::endl;
    return 0;
}
