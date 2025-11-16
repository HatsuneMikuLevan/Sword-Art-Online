

#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

void solve_7148() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cout << "Введите целое число a[" << i + 1 << "]: ";
        std::cin >> a;

        if (a > max_val) {
            max_val = a;
        }
        if (a < min_val) {
            min_val = a;
        }
    }

    bool is_within_range = (max_val - min_val <= 25);
    std::cout << "Максимальное из чисел превышает минимальное не более чем на 25: " << (is_within_range ? "Верно" : "Неверно") << std::endl;
}
