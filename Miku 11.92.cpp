

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <iomanip>

void solve11_92(const std::vector<int>& heights) {
    int sum_boys = 0;
    int count_boys = 0;
    int sum_girls = 0;
    int count_girls = 0;

    for (int h : heights) {
        if (h < 0) {
            sum_boys += std::abs(h);
            count_boys++;
        } else {
            sum_girls += h;
            count_girls++;
        }
    }

    if (count_boys > 0) {
        double avg_boys = static_cast<double>(sum_boys) / count_boys;
        std::cout << "Средний рост мальчиков: " << std::fixed << std::setprecision(2) << avg_boys << " см" << std::endl;
    } else {
        std::cout << "Мальчики не найдены." << std::endl;
    }

    if (count_girls > 0) {
        double avg_girls = static_cast<double>(sum_girls) / count_girls;
        std::cout << "Средний рост девочек: " << std::fixed << std::setprecision(2) << avg_girls << " см" << std::endl;
    } else {
        std::cout << "Девочки не найдены." << std::endl;
    }
}

int main() {
    std::vector<int> student_heights = {-170, 165, -175, 160, -180, 172, -168, 178, -171, 164, -176, 169, -173, 166, -179, 174, -167, 177, -172, 163, -178, 170};
    solve11_92(student_heights);
    return 0;
}
