

#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    double min_density = std::numeric_limits<double>::max();
    double population_millions, area_thousands, density;
    int num_states = 16;

    for (int i = 0; i < num_states; ++i) {
        std::cout << "Введите население (млн) и площадь (тыс. км^2) государства " << i + 1 << ": ";
        std::cin >> population_millions >> area_thousands;
        if (area_thousands > 0) {
            density = population_millions / area_thousands;
            if (density < min_density) {
                min_density = density;
            }
        } else {
            std::cout << "Площадь не может быть нулевой или отрицательной. Пропускаем государство " << i + 1 << std::endl;
        }
    }

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Минимальная плотность населения: " << min_density << " млн чел./тыс. км^2" << std::endl;

    return 0;
}
