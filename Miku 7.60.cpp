

#include <iostream>
#include <vector>

int main() {
    // Пример данных о температуре за месяц
    std::vector<double> temperatures = {1.5, -2.0, 0.0, -5.5, 3.0, -1.0, 2.5};
    int count_below_zero = 0;

    for (double temp : temperatures) {
        if (temp < 0.0) {
            count_below_zero++;
        }
    }

    std::cout << "Температура опускалась ниже 0°C " << count_below_zero << " раз(а)." << std::endl;

    return 0;
}
