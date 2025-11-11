

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Некорректный ввод n." << std::endl;
        return 1;
    }

    std::vector<double> a(n);
    std::cout << "Введите " << n << " чисел a1, a2, ..., an:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // a) |a1|+|a2|+...+|an|
    double sum_abs = 0.0;
    for (int i = 0; i < n; ++i) {
        sum_abs += std::abs(a[i]);
    }
    std::cout << "a) Сумма модулей: " << sum_abs << std::endl;

    // б) |a1|*|a2|*...*|an|
    double product_abs = 1.0;
    for (int i = 0; i < n; ++i) {
        product_abs *= std::abs(a[i]);
    }
    std::cout << "б) Произведение модулей: " << product_abs << std::endl;

    // в) a1+a2, a2+a3, ... an-1+an
    std::cout << "в) Последовательные суммы: ";
    for (int i = 0; i < n - 1; ++i) {
        std::cout << a[i] + a[i+1] << (i == n - 2 ? "" : ", ");
    }
    std::cout << std::endl;

    // г) a1-a2+a3-...
    double alternating_sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {
        alternating_sum += sign * a[i];
        sign *= -1; // Меняем знак для следующего слагаемого
    }
    std::cout << "г) Знакочередующаяся сумма: " << alternating_sum << std::endl;

    return 0;
}
