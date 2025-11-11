

#include <iostream>
#include <vector>
#include <numeric>

double calculate_average_rainfall(int num_days) {
    std::vector<double> rainfall(num_days);
    double sum = 0.0;
    for (int i = 0; i < num_days; ++i) {
        std::cin >> rainfall[i];
        sum += rainfall[i];
    }
    return sum / num_days;
}

int main() {
    const int days_in_month = 31;
    std::cout << "Введите количество осадков за каждый из 31 дня января: ";
    double average_jan = calculate_average_rainfall(days_in_month);
    std::cout << "Среднедневное количество осадков за январь: " << average_jan << std::endl;

    std::cout << "Введите количество осадков за каждый из 31 дня марта: ";
    double average_mar = calculate_average_rainfall(days_in_month);
    std::cout << "Среднедневное количество осадков за март: " << average_mar << std::endl;

    return 0;
}
