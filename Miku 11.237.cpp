

#include <iostream>
#include <vector>

int main() {
    const int num_countries = 28;
    double area_threshold_A;
    std::cout << "Введите пороговое значение площади A (в тыс. кв. км): ";
    std::cin >> area_threshold_A;

    std::vector<double> populations(num_countries); // в миллионах жителей
    std::vector<double> areas(num_countries);      // в тысячах кв. км

    std::cout << "Введите численность населения (млн) и площадь (тыс. кв. км) для 28 государств:\n";
    for (int i = 0; i < num_countries; ++i) {
        std::cout << "Государство " << i + 1 << ": Население Площадь: ";
        std::cin >> populations[i] >> areas[i];
    }

    double total_population_small = 0.0;

    for (int i = 0; i < num_countries; ++i) {
        if (areas[i] <= area_threshold_A) {
            total_population_small += populations[i];
        }
    }

    std::cout << "Общая численность населения в \"маленьких\" государствах: " << total_population_small << " млн человек\n";

    return 0;
}
