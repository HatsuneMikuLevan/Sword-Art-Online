

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <iomanip>

bool check_height_difference(const std::vector<double>& heights) {
    std::vector<double> boy_heights;
    std::vector<double> girl_heights;

    for (double h : heights) {
        if (h < 0) {
            boy_heights.push_back(std::abs(h));
        } else {
            girl_heights.push_back(h);
        }
    }

    if (boy_heights.empty() || girl_heights.empty()) {
        return false; 
    }

    double avg_boys = std::accumulate(boy_heights.begin(), boy_heights.end(), 0.0) / boy_heights.size();
    double avg_girls = std::accumulate(girl_heights.begin(), girl_heights.end(), 0.0) / girl_heights.size();

    return (avg_boys - avg_girls) > 10.0;
}

int main() {
    // Пример данных:
    // Мальчики: -170, -175, -180
    // Девочки: 160, 165, 170
    std::vector<double> class_heights = {-170, -175, -180, 160, 165, 170};

    if (check_height_difference(class_heights)) {
        std::cout << "Ответ: Да, средний рост мальчиков превышает средний рост девочек более чем на 10 см." << std::endl;
    } else {
        std::cout << "Ответ: Нет, средний рост мальчиков не превышает средний рост девочек более чем на 10 см." << std::endl;
    }

    return 0;
}
