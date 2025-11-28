

#include <iostream>
#include <vector>
#include <numeric>

void calculate_averages_pos_neg(const std::vector<int>& arr, double& avg_pos, double& avg_neg) {
    int sum_pos = 0;
    int count_pos = 0;
    int sum_neg = 0;
    int count_neg = 0;

    for (int element : arr) {
        if (element > 0) {
            sum_pos += element;
            count_pos++;
        } else if (element < 0) {
            sum_neg += element;
            count_neg++;
        }
    }

    avg_pos = (count_pos == 0) ? 0.0 : static_cast<double>(sum_pos) / count_pos;
    avg_neg = (count_neg == 0) ? 0.0 : static_cast<double>(sum_neg) / count_neg;
}

int main() {
    std::vector<int> data = {5, -12, 8, -20, 3, 15, -7, 25, 0};
    double avg_pos, avg_neg;
    calculate_averages_pos_neg(data, avg_pos, avg_neg);

    std::cout << "Среднее арифметическое положительных элементов: " << avg_pos << std::endl;
    std::cout << "Среднее арифметическое отрицательных элементов: " << avg_neg << std::endl;

    return 0;
}
