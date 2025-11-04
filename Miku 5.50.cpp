

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double initial_distance = 10.0;
    double increase_factor = 1.1;

    // a) Пробег за второй, третий, ..., десятый день
    std::cout << "Пробег за каждый день (со 2-го по 10-й):" << std::endl;
    for (int day = 2; day <= 10; ++day) {
        double distance = initial_distance * pow(increase_factor, day - 1);
        std::cout << "День " << day << ": " << std::fixed << std::setprecision(2) << distance << " км" << std::endl;
    }

    std::cout << std::endl;

    // б) Суммарный путь за первые 7 дней
    double total_distance_7_days = 0.0;
    for (int day = 1; day <= 7; ++day) {
        total_distance_7_days += initial_distance * pow(increase_factor, day - 1);
    }
    std::cout << "Суммарный путь за первые 7 дней: " << std::fixed << std::setprecision(2) << total_distance_7_days << " км" << std::endl;

    return 0;
}
