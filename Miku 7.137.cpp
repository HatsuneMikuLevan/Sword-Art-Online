

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    double max_distance = std::numeric_limits<double>::min();
    double current_distance;
    int n;

    std::cout << "Введите количество городов: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Некорректный ввод количества городов." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "Введите расстояние до города " << i + 1 << ": ";
        std::cin >> current_distance;
        if (current_distance > max_distance) {
            max_distance = current_distance;
        }
    }

    std::cout << "Расстояние от Москвы до самого удаленного города: " << max_distance << std::endl;

    return 0;
}
