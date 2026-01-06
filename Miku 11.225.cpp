

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int num_districts = 20;
    // Пример данных (в реальной задаче они могут вводиться пользователем или генерироваться)
    std::vector<double> areas(num_districts, 100.0); // Площади в гектарах
    std::vector<double> yields_total(num_districts, 5000.0); // Общий урожай в центнерах

    std::cout << std::fixed << std::setprecision(2);

    // --- Способ 1: Без использования дополнительного массива ---
    std::cout << "--- Способ 1: Без дополнительного массива ---\n";
    double total_area_1 = 0.0;
    double total_yield_1 = 0.0;

    for (int i = 0; i < num_districts; ++i) {
        double avg_yield_per_district = yields_total[i] / areas[i];
        std::cout << "Район " << i + 1 << ": Средняя урожайность = " << avg_yield_per_district << " ц/га\n";
        total_area_1 += areas[i];
        total_yield_1 += yields_total[i];
    }

    double overall_avg_yield_1 = total_yield_1 / total_area_1;
    std::cout << "Средняя урожайность по области: " << overall_avg_yield_1 << " ц/га\n";

    // --- Способ 2: С использованием дополнительного массива ---
    std::cout << "\n--- Способ 2: С использованием дополнительного массива ---\n";
    std::vector<double> avg_yields_per_district(num_districts);
    double total_area_2 = 0.0;
    double total_yield_2 = 0.0;

    for (int i = 0; i < num_districts; ++i) {
        avg_yields_per_district[i] = yields_total[i] / areas[i];
        std::cout << "Район " << i + 1 << ": Средняя урожайность = " << avg_yields_per_district[i] << " ц/га\n";
        total_area_2 += areas[i];
        total_yield_2 += yields_total[i];
    }

    double overall_avg_yield_2 = total_yield_2 / total_area_2;
    std::cout << "Средняя урожайность по области: " << overall_avg_yield_2 << " ц/га\n";

    return 0;
}
