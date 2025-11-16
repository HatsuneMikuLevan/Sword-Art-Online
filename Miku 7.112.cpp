

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> b = {5.2, 12.1, 8.0, 15.5, 3.1, 10.0, 20.0, 1.0, 11.1, 9.9, 14.0, 6.0, 18.2, 2.5, 7.7};
    double sum_over_10 = 0.0;
    int count_over_10 = 0;

    for (double val : b) {
        if (val > 10.0) {
            sum_over_10 += val;
            count_over_10++;
        }
    }

    if (count_over_10 > 0) {
        double avg_over_10 = sum_over_10 / count_over_10;
        std::cout << "Среднее арифметическое чисел больше 10: " << avg_over_10 << std::endl;
    } else {
        std::cout << "Чисел больше 10 нет." << std::endl;
    }

    return 0;
}
