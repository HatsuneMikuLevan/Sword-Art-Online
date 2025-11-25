

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;

    bool is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int days_in_feb = is_leap ? 29 : 28;

    std::vector<double> precipitations(days_in_feb);
    std::cout << "Введите количество осадков для каждого из " << days_in_feb << " дней:" << std::endl;
    for (int i = 0; i < days_in_feb; ++i) {
        std::cout << "День " << (i + 1) << ": ";
        std::cin >> precipitations[i];
    }

    double total_precipitation = std::accumulate(precipitations.begin(), precipitations.end(), 0.0);
    double average_precipitation = total_precipitation / days_in_feb;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднедневное количество осадков в феврале " << year << ": " << average_precipitation << std::endl;

    return 0;
}
