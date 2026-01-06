11.240

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main() {
    // Данные для 20 предметов (пример)
    std::vector<double> mass = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0};
    std::vector<double> volume = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    int n = mass.size();

    // Способ 1: без использования дополнительного массива
    double maxDensity1 = 0.0;
    for (int i = 0; i < n; ++i) {
        double density = mass[i] / volume[i];
        if (density > maxDensity1) {
            maxDensity1 = density;
        }
    }
    std::cout << "Максимальная плотность (способ 1): " << std::fixed << std::setprecision(2) << maxDensity1 << std::endl;

    // Способ 2: с использованием дополнительного массива
    std::vector<double> densities(n);
    for (int i = 0; i < n; ++i) {
        densities[i] = mass[i] / volume[i];
    }
    double maxDensity2 = *std::max_element(densities.begin(), densities.end());
    std::cout << "Максимальная плотность (способ 2): " << std::fixed << std::setprecision(2) << maxDensity2 << std::endl;

    return 0;
}
