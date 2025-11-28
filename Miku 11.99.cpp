

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> precipitations = {1.2, 0.5, 3.1, 0.0, 5.4, 2.8, 1.1, 0.7, 4.5, 3.9, 0.1, 2.2, 1.5, 0.0, 6.1, 3.4, 2.1, 1.8, 0.9, 4.2, 3.5, 2.7, 1.4, 0.8, 5.0, 4.1, 3.3, 2.0, 1.7, 0.6, 2.9};
    double sum = std::accumulate(precipitations.begin(), precipitations.end(), 0.0);
    double average_precipitation = sum / precipitations.size();
    int count = 0;
    std::cout << "Даты дней, в которые выпало осадков больше среднего (" << average_precipitation << " мм):" << std::endl;
    for (size_t i = 0; i < precipitations.size(); ++i) {
        if (precipitations[i] > average_precipitation) {
            std::cout << "День " << i + 1 << std::endl;
            count++;
        }
    }
    std::cout << "Общее количество таких дней: " << count << std::endl;
    return 0;
}
