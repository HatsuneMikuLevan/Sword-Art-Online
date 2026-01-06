

#include <iostream>
#include <vector>

void solve_11235(const std::vector<int>& power, const std::vector<double>& cost) {
    double total_cost_high_power = 0.0;
    int count_high_power = 0;
    const int POWER_THRESHOLD = 100; // 100 л.с.

    for (size_t i = 0; i < power.size(); ++i) {
        if (power[i] > POWER_THRESHOLD) {
            total_cost_high_power += cost[i];
            count_high_power++;
        }
    }

    std::cout << "Количество автомобилей с мощностью > " << POWER_THRESHOLD << " л.с.: " << count_high_power << "\n";
    std::cout << "Общая стоимость этих автомобилей: " << total_cost_high_power << "\n";
}
