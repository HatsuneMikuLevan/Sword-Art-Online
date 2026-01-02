

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11_143(const std::vector<double>& temperatures) {
    if (temperatures.size() < 2) {
        std::cout << "Недостаточно данных." << std::endl;
        return;
    }

    double max1 = -1000.0; // Предполагаем, что температура выше -1000
    double max2 = -1000.0;
    int day1 = -1;
    int day2 = -1;

    for (int i = 0; i < temperatures.size(); ++i) {
        if (temperatures[i] > max1) {
            max2 = max1;
            day2 = day1;
            max1 = temperatures[i];
            day1 = i + 1; // Дни нумеруются с 1
        } else if (temperatures[i] > max2 && temperatures[i] != max1) {
            max2 = temperatures[i];
            day2 = i + 1;
        }
    }

    std::cout << "Даты двух самых теплых дней в июле: " << day1 << " и " << day2 << std::endl;
}
