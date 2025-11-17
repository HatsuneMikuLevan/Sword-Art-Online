

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    // Пример данных (время в секундах)
    std::vector<double> results = {12.1, 11.5, 13.2, 10.9, 11.8, 12.5};
    int n = results.size();

    if (n < 2) {
        std::cout << "Недостаточно спортсменов." << std::endl;
        return 1;
    }

    double best1 = std::numeric_limits<double>::max();
    double best2 = std::numeric_limits<double>::max();

    for (int i = 0; i < n; ++i) {
        if (results[i] < best1) {
            best2 = best1;
            best1 = results[i];
        } else if (results[i] < best2) {
            best2 = results[i];
        }
    }

    std::cout << "Результат первого места: " << best1 << " с" << std::endl;
    std::cout << "Результат второго места: " << best2 << " с" << std::endl;

    return 0;
}
