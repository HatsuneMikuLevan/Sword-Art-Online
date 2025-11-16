

#include <iostream>
#include <vector>
#include <numeric>

void solve_7111(const std::vector<double>& heights) {
    double sum_boys = 0;
    int count_boys = 0;
    double sum_girls = 0;
    int count_girls = 0;

    for (double h : heights) {
        if (h < 0) {
            sum_boys += h;
            count_boys++;
        } else if (h > 0) {
            sum_girls += h;
            count_girls++;
        }
    }

    if (count_boys > 0) {
        std::cout << "Средний рост мальчиков: " << sum_boys / count_boys << std::endl;
    } else {
        std::cout << "Мальчики не найдены." << std::endl;
    }

    if (count_girls > 0) {
        std::cout << "Средний рост девочек: " << sum_girls / count_girls << std::endl;
    } else {
        std::cout << "Девочки не найдены." << std::endl;
    }
}
