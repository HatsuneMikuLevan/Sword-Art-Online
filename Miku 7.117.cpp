

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    std::vector<double> growth_data = {170.5, -165.0, 155.2, -175.8, 160.1, -180.5, 172.0, -170.0};
    double sum_boys = 0.0;
    int count_boys = 0;
    double sum_girls = 0.0;
    int count_girls = 0;

    for (double growth : growth_data) {
        if (growth < 0) {
            sum_boys += std::abs(growth);
            count_boys++;
        } else {
            sum_girls += growth;
            count_girls++;
        }
    }

    if (count_boys > 0 && count_girls > 0) {
        double avg_boys = sum_boys / count_boys;
        double avg_girls = sum_girls / count_girls;
        bool boys_taller = (avg_boys - avg_girls) > 10.0;

        std::cout << "Средний рост мальчиков: " << avg_boys << " см" << std::endl;
        std::cout << "Средний рост девочек: " << avg_girls << " см" << std::endl;
        if (boys_taller) {
            std::cout << "Верно, средний рост мальчиков превышает средний рост девочек более чем на 10 см." << std::endl;
        } else {
            std::cout << "Неверно, средний рост мальчиков не превышает средний рост девочек более чем на 10 см." << std::endl;
        }
    } else {
        std::cout << "Недостаточно данных для обеих групп." << std::endl;
    }

    return 0;
}
