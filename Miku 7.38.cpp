

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int num_districts = 12;
    std::vector<double> populations(num_districts); // Население в тысячах человек
    std::vector<double> densities(num_districts); // Плотность населения в тыс. чел./км²
    double total_area = 0.0;

    std::cout << "Введите население (в тыс. чел.) и плотность населения (в тыс. чел./км²) для каждого из " << num_districts << " районов:" << std::endl;
    for (int i = 0; i < num_districts; ++i) {
        std::cout << "Район " << i + 1 << " (население плотность): ";
        std::cin >> populations[i] >> densities[i];
        if (densities[i] > 0) {
            total_area += populations[i] / densities[i];
        } else {
            std::cout << "Плотность населения не может быть нулевой. Пропускаем район." << std::endl;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Общая площадь территории области (в км²): " << total_area << std::endl;

    return 0;
}
