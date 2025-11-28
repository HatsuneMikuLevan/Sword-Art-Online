

#include <iostream>
#include <vector>
#include <numeric>

bool check_no_rain_days(const std::vector<double>& precipitations) {
    int count = 0;
    for (double p : precipitations) {
        if (p == 0.0) {
            count++;
        }
    }
    return count == 10;
}

int main() {
    // Пример данных за март (31 день). 
    // Предположим, что 10 дней без осадков (0.0).
    std::vector<double> march_precipitations = {1.0, 0.0, 2.5, 0.0, 5.0, 0.0, 1.2, 0.0, 3.1, 0.0, 
                                                0.5, 0.0, 4.5, 0.0, 2.0, 0.0, 1.5, 0.0, 3.0, 0.0, 
                                                0.8, 1.1, 0.0, 2.2, 0.0, 1.4, 0.0, 3.3, 0.0, 0.0, 0.0};

    if (check_no_rain_days(march_precipitations)) {
        std::cout << "Верно, осадков не было 10 дней." << std::endl;
    } else {
        std::cout << "Неверно, количество дней без осадков отличается от 10." << std::endl;
    }

    return 0;
}
