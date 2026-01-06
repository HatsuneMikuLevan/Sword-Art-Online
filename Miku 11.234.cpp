

#include <iostream>
#include <vector>

void solve_11234(const std::vector<double>& population, const std::vector<double>& area) {
    double total_population_large_area = 0.0;
    int count_large_area = 0;
    const double AREA_THRESHOLD = 5.0; // 5 млн кв. км

    for (size_t i = 0; i < area.size(); ++i) {
        if (area[i] > AREA_THRESHOLD) {
            total_population_large_area += population[i];
            count_large_area++;
        }
    }

    std::cout << "Количество государств с площадью > " << AREA_THRESHOLD << " млн кв. км: " << count_large_area << "\n";
    std::cout << "Общая численность населения в этих государствах: " << total_population_large_area << " млн человек\n";
}
