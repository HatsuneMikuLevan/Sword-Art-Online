

#include <iostream>
#include <vector>
#include <numeric>

void calculate_average_masses(const std::vector<double>& masses, double& avg_full, double& avg_other) {
    double sum_full = 0.0;
    int count_full = 0;
    double sum_other = 0.0;
    int count_other = 0;

    for (double mass : masses) {
        if (mass > 100.0) {
            sum_full += mass;
            count_full++;
        } else {
            sum_other += mass;
            count_other++;
        }
    }

    avg_full = (count_full == 0) ? 0.0 : sum_full / count_full;
    avg_other = (count_other == 0) ? 0.0 : sum_other / count_other;
}

int main() {
    // Пример данных для 25 человек
    std::vector<double> people_masses = {
        65.5, 110.2, 75.1, 95.0, 105.5, 88.3, 72.4, 120.1, 68.9, 99.8,
        101.0, 81.2, 76.5, 115.3, 90.1, 70.0, 100.0, 85.6, 108.7, 79.2,
        92.3, 103.4, 87.1, 74.8, 112.6
    };
    double avg_full, avg_other;
    calculate_average_masses(people_masses, avg_full, avg_other);

    std::cout << "Средняя масса полных людей: " << avg_full << std::endl;
    std::cout << "Средняя масса остальных людей: " << avg_other << std::endl;

    return 0;
}
