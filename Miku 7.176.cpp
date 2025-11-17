

#include <iostream>
#include <climits>

int main() {
    const int daysInJuly = 31;
    int temperatures[daysInJuly];
    std::cout << "Введите среднедневную температуру за каждый из 31 дня июля: " << std::endl;
    for (int i = 0; i < daysInJuly; ++i) {
        std::cin >> temperatures[i];
    }

    int minTemp1 = INT_MAX;
    int day1 = -1;
    for (int i = 0; i < daysInJuly; ++i) {
        if (temperatures[i] < minTemp1) {
            minTemp1 = temperatures[i];
            day1 = i + 1;
        }
    }

    int minTemp2 = INT_MAX;
    int day2 = -1;
    for (int i = 0; i < daysInJuly; ++i) {
        if (temperatures[i] < minTemp2 && i + 1 != day1) {
            minTemp2 = temperatures[i];
            day2 = i + 1;
        }
    }

    std::cout << "Два самых прохладных дня в июле:" << std::endl;
    std::cout << "Дата 1: " << day1 << " июля (Температура: " << minTemp1 << ")" << std::endl;
    std::cout << "Дата 2: " << day2 << " июля (Температура: " << minTemp2 << ")" << std::endl;

    return 0;
}
