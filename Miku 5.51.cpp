

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double initial_area = 100.0;
    double initial_yield = 20.0;
    double area_growth_rate = 0.05;
    double yield_growth_rate = 0.02;

    // Решение задачи (а)
    std::cout << "а) Урожайность за 2-й, 3-й, ..., 8-й год:" << std::endl;
    std::cout << std::fixed << std::setprecision(5);
    for (int year = 2; year <= 8; ++year) {
        double current_yield = initial_yield * pow(1 + yield_growth_rate, year - 1);
        std::cout << "Год " << year << ": " << current_yield << " ц/га" << std::endl;
    }
    std::cout << std::endl;

    // Решение задачи (б)
    std::cout << "б) Площадь участка в 4-й, 5-й, ..., 7-й год:" << std::endl;
    for (int year = 4; year <= 7; ++year) {
        double current_area = initial_area * pow(1 + area_growth_rate, year - 1);
        std::cout << "Год " << year << ": " << current_area << " га" << std::endl;
    }
    std::cout << std::endl;

    // Решение задачи (в)
    std::cout << "в) Какой урожай будет собран за первые шесть лет:" << std::endl;
    double total_harvest = 0.0;
    for (int year = 1; year <= 6; ++year) {
        double current_area = initial_area * pow(1 + area_growth_rate, year - 1);
        double current_yield = initial_yield * pow(1 + yield_growth_rate, year - 1);
        double current_harvest = current_area * current_yield;
        total_harvest += current_harvest;
    }
    std::cout << "Общий урожай за 6 лет: " << total_harvest << " ц" << std::endl;

    return 0;
}
