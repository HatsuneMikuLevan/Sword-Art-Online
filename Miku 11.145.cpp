

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_11_145(const std::vector<double>& temperatures) {
    if (temperatures.size() < 2) {
        std::cout << "Недостаточно данных." << std::endl;
        return;
    }

    double min1 = 1000.0; // Предполагаем, что температура ниже 1000
    double min2 = 1000.0;
    int day1 = -1;
    int day2 = -1;

    for (int i = 0; i < temperatures.size(); ++i) {
        if (temperatures[i] < min1) {
            min2 = min1;
            day2 = day1;
            min1 = temperatures[i];
            day1 = i + 1; // Дни нумеруются с 1
        } else if (temperatures[i] < min2 && temperatures[i] != min1) {
            min2 = temperatures[i];
            day2 = i + 1;
        }
    }

    std::cout << "Даты двух самых холодных дней в феврале: " << day1 << " и " << day2 << std::endl;
}
