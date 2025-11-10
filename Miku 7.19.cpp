

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Предположим, что в феврале 28 дней
    const int days_in_feb = 28;
    std::vector<double> current_year_rainfall(days_in_feb);
    std::vector<double> previous_year_rainfall(days_in_feb);


    // Вычисление суммы осадков
    double current_sum = std::accumulate(current_year_rainfall.begin(), current_year_rainfall.end(), 0.0);
    double previous_sum = std::accumulate(previous_year_rainfall.begin(), previous_year_rainfall.end(), 0.0);

    // Сравнение сумм
    if (current_sum > previous_sum) {
        std::cout << "Да" << std::endl;
    } else {
        std::cout << "Нет" << std::endl;
    }

    return 0;
}
