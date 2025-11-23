

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

void calculateFrequency(int num_throws) {
    std::vector<int> counts(7, 0); // Индексы 1-6 используются

    for (int i = 0; i < num_throws; ++i) {
        int roll = (rand() % 6) + 1;
        counts[roll]++;
    }

    std::cout << "Результаты для " << num_throws << " бросков:" << std::endl;
    for (int i = 1; i <= 6; ++i) {
        double frequency = static_cast<double>(counts[i]) / num_throws;
        std::cout << "Число " << i << ": " << counts[i] << " раз, относительная частота: " << std::fixed << std::setprecision(3) << frequency << std::endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    calculateFrequency(100);
    std::cout << std::endl;
    calculateFrequency(1000);

    return 0;
}
