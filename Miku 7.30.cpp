

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cout << "Введите количество предметов: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество предметов должно быть натуральным числом." << std::endl;
        return 1;
    }

    std::vector<double> masses(n);
    double sum = 0.0;
    std::cout << "Введите " << n << " масс предметов: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> masses[i];
        sum += masses[i];
    }

    double average_mass = sum / n;
    std::cout << "Средняя масса: " << average_mass << std::endl;

    return 0;
}
