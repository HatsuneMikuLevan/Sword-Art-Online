

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<double> precipitations = { /* Вставьте 15 значений осадков здесь */ };
    int n = precipitations.size();
    
    if (n == 0) {
        std::cout << "Нет данных." << std::endl;
        return 1;
    }

    double sum = std::accumulate(precipitations.begin(), precipitations.end(), 0.0);
    double average = sum / n;

    std::cout << "Среднее количество осадков: " << average << std::endl;
    std::cout << "Отклонения от среднего:" << std::endl;

    for (double p : precipitations) {
        double deviation = p - average;
        std::cout << "Отклонение для " << p << " мм: " << deviation << std::endl;
    }

    return 0;
}
