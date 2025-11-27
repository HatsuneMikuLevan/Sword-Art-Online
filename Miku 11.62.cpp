

#include <iostream>
#include <vector>

int main() {
    // Пример данных за 28 дней февраля
    std::vector<double> precipitations_feb = {
        1.0, 2.5, 0.0, 5.1, 3.2, 1.5, 0.0, 
        0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 
        7.7, 8.8, 9.9, 1.2, 2.3, 3.4, 4.5,
        5.6, 6.7, 7.8, 8.9, 9.0, 1.0, 2.0
    }; 

    double total_even_day_precip = 0.0;


    for (size_t i = 1; i < precipitations_feb.size(); i += 2) {
        total_even_day_precip += precipitations_feb[i];
    }

    std::cout << "Общее число осадков по четным числам февраля: " << total_even_day_precip << std::endl;

    return 0;
}
