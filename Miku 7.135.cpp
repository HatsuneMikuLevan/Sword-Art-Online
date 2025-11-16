

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

void solve_7_135() {
    int n;
    std::cout << "Введите натуральное число n: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Некорректный ввод n." << std::endl;
        return;
    }

    double max_val = std::numeric_limits<double>::lowest();
    double min_val = std::numeric_limits<double>::max();
    double input;

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите число x" << i + 1 << ": ";
        if (!(std::cin >> input)) {
            std::cout << "Некорректный ввод числа." << std::endl;
            return;
        }
        if (input > max_val) {
            max_val = input;
        }
        if (input < min_val) {
            min_val = input;
        }
    }

    std::cout << "а) Максимальное из вещественных чисел: " << max_val << std::endl;
    std::cout << "б) Минимальное из вещественных чисел: " << min_val << std::endl;
    std::cout << "в) Максимальное и минимальное из вещественных чисел: " << max_val << ", " << min_val << std::endl;
}
