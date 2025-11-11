

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int num_districts = 10;
    std::vector<double> areas(num_districts); // Площади в гектарах
    std::vector<double> yields(num_districts); // Урожайность в центнерах/гектар
    double total_wheat = 0.0;
    double total_area = 0.0;

    std::cout << "Введите площадь и урожайность для каждого из " << num_districts << " районов:" << std::endl;
    for (int i = 0; i < num_districts; ++i) {
        std::cout << "Район " << i + 1 << " (площадь урожайность): ";
        std::cin >> areas[i] >> yields[i];
        total_wheat += areas[i] * yields[i];
        total_area += areas[i];
    }

    double average_yield_per_area = (total_area > 0) ? total_wheat / total_area : 0.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Общее количество пшеницы, собранное в области (в центнерах): " << total_wheat << std::endl;
    std::cout << "Средняя урожайность по области (в центнерах с гектара): " << average_yield_per_area << std::endl;

    return 0;
}
