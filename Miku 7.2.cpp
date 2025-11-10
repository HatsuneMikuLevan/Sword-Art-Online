

#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double a;
        std::cout << "Введите вещественное число a" << i + 1 << ": ";
        std::cin >> a;
        sum += a;
    }
    std::cout << "Сумма вещественных чисел: " << sum << std::endl;
    return 0;
}
