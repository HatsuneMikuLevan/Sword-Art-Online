

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    const int days_in_sep = 30;
    std::vector<double> precipitations(days_in_sep);

    std::cout << "Введите количество осадков для каждого из 30 дней сентября:" << std::endl;
    for (int i = 0; i < days_in_sep; ++i) {
        std::cout << "День " << (i + 1) << ": ";
        std::cin >> precipitations[i];
    }

    double avg_decade1 = std::accumulate(precipitations.begin(), precipitations.begin() + 10, 0.0) / 10.0;
    double avg_decade2 = std::accumulate(precipitations.begin() + 10, precipitations.begin() + 20, 0.0) / 10.0;
    double avg_decade3 = std::accumulate(precipitations.begin() + 20, precipitations.end(), 0.0) / 10.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее количество осадков в 1-й декаде: " << avg_decade1 << std::endl;
    std::cout << "Среднее количество осадков во 2-й декаде: " << avg_decade2 << std::endl;
    std::cout << "Среднее количество осадков в 3-й декаде: " << avg_decade3 << std::endl;

    return 0;
}
