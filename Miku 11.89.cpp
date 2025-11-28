

#include <iostream>
#include <vector>
#include <numeric>

double calculate_average_rainy_days(const std::vector<double>& precipitations) {
    double sum = 0.0;
    int count = 0;
    for (double p : precipitations) {
        if (p > 0.0) {
            sum += p;
            count++;
        }
    }

    if (count == 0) {
        return 0.0; // Возвращаем 0, если дождя не было
    }
    return sum / count;
}

int main() {
    // Пример данных за август (31 день)
    std::vector<double> august_precipitations = {1.0, 0.0, 2.5, 0.0, 5.0, 0.0, 1.2, 0.0, 3.1, 0.0, 
                                                 0.5, 0.0, 4.5, 0.0, 2.0, 0.0, 1.5, 0.0, 3.0, 0.0, 
                                                 0.8, 1.1, 0.0, 2.2, 0.0, 1.4, 0.0, 3.3, 0.0, 0.0, 0.0};
    double average = calculate_average_rainy_days(august_precipitations);

    std::cout << "Среднее количество осадков в дождливые дни: " << average << std::endl;

    return 0;
}
