

#include <iostream>
#include <limits>

int main() {
    int s[12];
    // Ввод данных в одном цикле
    for (int i = 0; i < 12; ++i) {
        std::cin >> s[i];
    }

    int max_val = std::numeric_limits<int>::min();
    int count_max = 0;
    int i = 0;

    // Обработка данных в одном цикле (используя while вместо for)
    while (i < 12) {
        if (s[i] > max_val) {
            max_val = s[i];
            count_max = 1;
        } else if (s[i] == max_val) {
            count_max++;
        }
        i++;
    }

    std::cout << "Максимальное число: " << max_val << ", встречается раз: " << count_max << std::endl;

    return 0;
}
#include <iostream>
#include <limits>

int main() {
    int s[12];
    // Ввод данных в одном цикле
    for (int i = 0; i < 12; ++i) {
        std::cin >> s[i];
    }

    int min_val = std::numeric_limits<int>::max();
    int count_min = 0;
    int i = 0;

    // Обработка данных в одном цикле (используя while вместо for)
    while (i < 12) {
        if (s[i] < min_val) {
            min_val = s[i];
            count_min = 1;
        } else if (s[i] == min_val) {
            count_min++;
        }
        i++;
    }

    std::cout << "Минимальное число: " << min_val << ", встречается раз: " << count_min << std::endl;

    return 0;
}
