

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> mass = {75.5, 120.0, 85.2, 110.1, 95.0, 100.0, 105.5, 60.0};
    double sum_full = 0;
    int count_full = 0;
    double sum_other = 0;
    int count_other = 0;
    for (double val : mass) {
        if (val > 100.0) {
            sum_full += val;
            count_full++;
        } else {
            sum_other += val;
            count_other++;
        }
    }
    // По условию задачи, полные люди имеются.
    double average_full = sum_full / count_full;
    double average_other = sum_other / count_other;
    std::cout << "Средняя масса полных людей: " << average_full << std::endl;
    std::cout << "Средняя масса остальных людей: " << average_other << std::endl;
    return 0;
}
