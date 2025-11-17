

#include <iostream>
#include <vector>
#include <limits>

int main() {
    int m;
    std::cout << "Введите количество чисел m: ";
    std::cin >> m;

    if (m <= 0) {
        std::cout << "Некорректное значение m." << std::endl;
        return 1;
    }

    std::vector<int> d(m);
    int max_val = std::numeric_limits<int>::min();
    int min_val = std::numeric_limits<int>::max();
    int last_max_index = -1;
    int last_min_index = -1;

    for (int i = 0; i < m; ++i) {
        std::cout << "Введите число d[" << i + 1 << "]: ";
        std::cin >> d[i];

        // Условные операторы
        if (d[i] >= max_val) {
            max_val = d[i];
            last_max_index = i + 1;
        }

        if (d[i] <= min_val) {
            min_val = d[i];
            last_min_index = i + 1;
        }
    }

    std::cout << "Номер последнего максимального числа: " << last_max_index << std::endl;
    std::cout << "Номер последнего минимального числа: " << last_min_index << std::endl;

    return 0;
}
