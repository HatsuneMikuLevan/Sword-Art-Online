

#include <iostream>
#include <limits>

int main() {
    double max_temp = std::numeric_limits<double>::lowest();
    double current_temp;
    int days_in_month = 30; // Пример для 30 дней

    for (int i = 0; i < days_in_month; ++i) {
        std::cout << "Введите температуру за день " << i + 1 << ": ";
        std::cin >> current_temp;
        if (current_temp > max_temp) {
            max_temp = current_temp;
        }
    }

    std::cout << "Максимальная температура этого месяца: " << max_temp << std::endl;

    return 0;
}
