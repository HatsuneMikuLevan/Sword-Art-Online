

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    // Данные для 15 параллелепипедов (пример)
    std::vector<double> length = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0};
    std::vector<double> width = {1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0};
    std::vector<double> height = {5.0, 4.0, 3.0, 2.0, 1.0, 5.0, 4.0, 3.0, 2.0, 1.0, 5.0, 4.0, 3.0, 2.0, 1.0};
    int n = length.size();

    // Способ 1: без использования дополнительного массива
    double maxVolume1 = 0.0;
    double minVolume1 = std::numeric_limits<double>::max();
    int maxIdx1 = -1;
    int minIdx1 = -1;
    for (int i = 0; i < n; ++i) {
        double volume = length[i] * width[i] * height[i];
        if (volume > maxVolume1) {
            maxVolume1 = volume;
            maxIdx1 = i + 1;
        }
        if (volume < minVolume1) {
            minVolume1 = volume;
            minIdx1 = i + 1;
        }
    }
    std::cout << "Способ 1:" << std::endl;
    std::cout << "a) Максимальный объем: " << maxVolume1 << std::endl;
    std::cout << "б) Минимальный объем: " << minVolume1 << std::endl;
    std::cout << "в) Номер фигуры с макс. объемом: " << maxIdx1 << std::endl;
    std::cout << "г) Номер фигуры с мин. объемом: " << minIdx1 << std::endl;

    // Способ 2: с использованием дополнительного массива
    std::vector<double> volumes(n);
    for (int i = 0; i < n; ++i) {
        volumes[i] = length[i] * width[i] * height[i];
    }
    double maxVolume2 = *std::max_element(volumes.begin(), volumes.end());
    double minVolume2 = *std::min_element(volumes.begin(), volumes.end());
    int maxIdx2 = std::distance(volumes.begin(), std::max_element(volumes.begin(), volumes.end())) + 1;
    int minIdx2 = std::distance(volumes.begin(), std::min_element(volumes.begin(), volumes.end())) + 1;
    std::cout << "Способ 2:" << std::endl;
    std::cout << "a) Максимальный объем: " << maxVolume2 << std::endl;
    std::cout << "б) Минимальный объем: " << minVolume2 << std::endl;
    std::cout << "в) Номер фигуры с макс. объемом: " << maxIdx2 << std::endl;
    std::cout << "г) Номер фигуры с мин. объемом: " << minIdx2 << std::endl;

    return 0;
}
