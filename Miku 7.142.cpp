

#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    double max_density = std::numeric_limits<double>::lowest();
    double mass, volume, density;
    int num_bodies = 20;

    for (int i = 0; i < num_bodies; ++i) {
        std::cout << "Введите массу (кг) и объем (см^3) тела " << i + 1 << ": ";
        std::cin >> mass >> volume;
        if (volume > 0) {
            density = mass / volume;
            if (density > max_density) {
                max_density = density;
            }
        } else {
            std::cout << "Объем не может быть нулевым или отрицательным. Пропускаем тело " << i + 1 << std::endl;
        }
    }

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Максимальная плотность материала: " << max_density << " кг/см^3" << std::endl;

    return 0;
}
