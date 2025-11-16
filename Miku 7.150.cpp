7.150

#include <iostream>
#include <algorithm>
#include <vector>

void solve_7150() {
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    int max_length = 0;
    int current_length = 0;

    for (int i = 0; i < n; ++i) {
        int d;
        std::cout << "Введите целое число d[" << i + 1 << "]: ";
        std::cin >> d;

        if (d % 2 == 0) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 0;
        }
    }

    // Проверяем длину последнего отрезка
    if (current_length > max_length) {
        max_length = current_length;
    }

    std::cout << "Наибольшая длина отрезка из четных чисел: " << max_length << std::endl;
}
