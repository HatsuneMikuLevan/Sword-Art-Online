#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    double total_sum = 0.0;
    double partial_sum_sin = 0.0;
    for (int i = 1; i <= n; ++i) {
        partial_sum_sin += sin(i);
        total_sum += 1.0 / partial_sum_sin;
    }
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Сумма ряда (a) равна: " << total_sum << std::endl;
    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        result = sqrt(2 + result);
    }
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Значение выражения (б) равно: " << result << std::endl;
    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    double total_sum = 0.0;
    double numerator_sum = 0.0;
    double denominator_sum = 0.0;

    for (int i = 1; i <= n; ++i) {
        numerator_sum += cos(i);
        denominator_sum = 0.0;
        for (int j = 1; j <= 2 * i; ++j) {
            denominator_sum += sin(j);
        }

        if (denominator_sum != 0) {
            total_sum += numerator_sum / denominator_sum;
        } else {
            // Обработка случая, когда знаменатель равен нулю
            std::cout << "Знаменатель равен нулю для i = " << i << std::endl;
            return 1;
        }
    }

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Результат: " << total_sum << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    double result = 0.0;
    if (n > 0) {
        result = sqrt(3.0 * n);
        for (int i = n - 1; i >= 1; --i) {
            result = sqrt(3.0 * i + result);
        }
    }

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}
