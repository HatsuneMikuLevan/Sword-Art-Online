

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <chrono>

int main() {
    long long num_points = 10000000; // Увеличить для большей точности
    long long inside_circle = 0;
    double x, y;
    double pi_estimate;
    double tolerance = 0.0001;
    
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    std::uniform_real_distribution<double> dist(0.0, 1.0);

    for (long long i = 0; i < num_points; ++i) {
        x = dist(rng);
        y = dist(rng);
        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }
    }

    pi_estimate = 4.0 * (static_cast<double>(inside_circle) / num_points);
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Приблизительное значение PI: " << pi_estimate << std::endl;
    // Примечание: достижение точности 0.0001 методом Монте-Карло требует очень большого 
    // количества точек, гораздо больше, чем 10 миллионов, для статистической уверенности.

    return 0;
}
