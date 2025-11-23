

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <chrono>

int main() {
    long long num_points = 10000000;
    long long inside_curve = 0;
    double x, y;
    const double pi = std::acos(-1.0);
    double rect_area = pi * 1.0;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    std::uniform_real_distribution<double> dist_x(0.0, pi);
    std::uniform_real_distribution<double> dist_y(0.0, 1.0);

    for (long long i = 0; i < num_points; ++i) {
        x = dist_x(rng);
        y = dist_y(rng);
        if (y <= std::sin(x)) {
            inside_curve++;
        }
    }

    double area = rect_area * (static_cast<double>(inside_curve) / num_points);
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Приблизительная площадь (синусоида): " << area << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <chrono>

int main() {
    long long num_points = 10000000;
    long long inside_curve = 0;
    double x, y;
    double rect_area = 3.0 * 9.0;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(seed);
    std::uniform_real_distribution<double> dist_x(0.0, 3.0);
    std::uniform_real_distribution<double> dist_y(0.0, 9.0);

    for (long long i = 0; i < num_points; ++i) {
        x = dist_x(rng);
        y = dist_y(rng);
        if (y <= x * x) {
            inside_curve++;
        }
    }

    double area = rect_area * (static_cast<double>(inside_curve) / num_points);
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Приблизительная площадь (парабола): " << area << std::endl;

    return 0;
}
