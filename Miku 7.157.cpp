

#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Введите количество чисел n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Некорректное значение n." << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    int max_val = std::numeric_limits<int>::min();
    int min_val = std::numeric_limits<int>::max();
    int last_max_index = -1;
    int first_min_index = -1;

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите число a[" << i + 1 << "]: ";
        std::cin >> a[i];

        // Условные операторы
        if (a[i] >= max_val) {
            max_val = a[i];
            last_max_index = i + 1;
        }

        if (a[i] < min_val) {
            min_val = a[i];
            first_min_index = i + 1;
        }
    }

    std::cout << "Номер последнего максимального числа (a): " << last_max_index << std::endl;
    std::cout << "Номер первого минимального числа (б): " << first_min_index << std::endl;

    return 0;
}
