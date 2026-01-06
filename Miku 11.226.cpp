

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int num_districts = 10;
    // Пример данных
    std::vector<double> areas(num_districts, 150.0); // Площади в гектарах
    std::vector<double> avg_yields(num_districts, 45.0); // Средняя урожайность в ц/га

    std::cout << std::fixed << std::setprecision(2);

    // --- Способ 1: Без использования дополнительного массива ---
    std::cout << "--- Способ 1: Без дополнительного массива ---\n";
    double total_yield_area_1 = 0.0;
    double total_area_1 = 0.0;

    for (int i = 0; i < num_districts; ++i) {
        // Урожай по району не хранится в отдельном массиве, а сразу суммируется
        total_yield_area_1 += areas[i] * avg_yields[i];
        total_area_1 += areas[i];
    }

    double overall_avg_yield_1 = total_yield_area_1 / total_area_1;
    std::cout << "Общее количество пшеницы по области: " << total_yield_area_1 << " ц\n";
    std::cout << "Средняя урожайность по области: " << overall_avg_yield_1 << " ц/га\n";

    // --- Способ 2: С использованием дополнительного массива ---
    std::cout << "\n--- Способ 2: С использованием дополнительного массива ---\n";
    std::vector<double> district_yields(num_districts);
    double total_yield_area_2 = 0.0;
    double total_area_2 = 0.0;

    for (int i = 0; i < num_districts; ++i) {
        district_yields[i] = areas[i] * avg_yields[i];
        total_yield_area_2 += district_yields[i];
        total_area_2 += areas[i];
    }

    double overall_avg_yield_2 = total_yield_area_2 / total_area_2;
    std::cout << "Общее количество пшеницы по области: " << total_yield_area_2 << " ц\n";
    std::cout << "Средняя урожайность по области: " << overall_avg_yield_2 << " ц/га\n";

    return 0;
}
