

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <limits>

int main() {
    // Данные для 25 автомобилей (пример)
    std::vector<double> distance = {100.0, 120.0, 80.0, 90.0, 110.0, 130.0, 95.0, 105.0, 115.0, 125.0, 85.0, 92.0, 108.0, 122.0, 98.0, 102.0, 112.0, 128.0, 88.0, 94.0, 106.0, 118.0, 82.0, 104.0};
    std::vector<double> time = {2.0, 2.5, 1.5, 1.8, 2.1, 2.6, 1.9, 2.2, 2.4, 2.7, 1.6, 1.85, 2.15, 2.55, 1.95, 2.05, 2.25, 2.65, 1.7, 1.88, 2.12, 2.45, 1.55, 2.08};
    int n = distance.size();

    // Способ 1: без использования дополнительного массива
    double minSpeed1 = std::numeric_limits<double>::max();
    for (int i = 0; i < n; ++i) {
        double speed = distance[i] / time[i];
        if (speed < minSpeed1) {
            minSpeed1 = speed;
        }
    }
    std::cout << "Минимальная скорость (способ 1): " << std::fixed << std::setprecision(2) << minSpeed1 << std::endl;

    // Способ 2: с использованием дополнительного массива
    std::vector<double> speeds(n);
    for (int i = 0; i < n; ++i) {
        speeds[i] = distance[i] / time[i];
    }
    double minSpeed2 = *std::min_element(speeds.begin(), speeds.end());
    std::cout << "Минимальная скорость (способ 2): " << std::fixed << std::setprecision(2) << minSpeed2 << std::endl;

    return 0;
}
