

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int num_districts = 12;
    std::vector<double> populations(num_districts); // Население в тысячах человек
    std::vector<double> areas(num_districts); // Площадь в км²
    double total_population = 0.0;
    double total_area = 0.0;

    std::cout << "Введите население (в тыс. чел.) и площадь (в км²) для каждого из " << num_districts << " районов:" << std::endl;
    for (int i = 0; i < num_districts; ++i) {
        std::cout << "Район " << i + 1 << " (население площадь): ";
        std::cin >> populations[i] >> areas[i];
        total_population += populations[i];
        total_area += areas[i];
    }

    double average_density = (total_area > 0) ? total_population / total_area : 0.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средняя плотность населения по области (тыс. чел./км²): " << average_density << std::endl;

    return 0;
}
