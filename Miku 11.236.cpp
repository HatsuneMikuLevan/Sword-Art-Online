

#include <iostream>
#include <vector>

int main() {
    int days_in_month;
    std::cout << "Введите количество дней в месяце: ";
    std::cin >> days_in_month;

    std::vector<double> precipitations(days_in_month);
    std::vector<double> temperatures(days_in_month);

    std::cout << "Введите количество осадков и температуру для каждого дня:\n";
    for (int i = 0; i < days_in_month; ++i) {
        std::cout << "День " << i + 1 << ": Осадки Температура: ";
        std::cin >> precipitations[i] >> temperatures[i];
    }

    double snow_total = 0.0;
    double rain_total = 0.0;

    for (int i = 0; i < days_in_month; ++i) {
        if (temperatures[i] > 0) {
            rain_total += precipitations[i];
        } else {
            snow_total += precipitations[i];
        }
    }

    std::cout << "Общее количество осадков в виде снега: " << snow_total << " мм\n";
    std::cout << "Общее количество осадков в виде дождя: " << rain_total << " мм\n";

    return 0;
}
