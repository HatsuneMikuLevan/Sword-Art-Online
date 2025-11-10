7.20

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    double car_capacity;
    // Ввод грузоподъемности автомобиля
    std::cout << "Введите грузоподъемность автомобиля: ";
    std::cin >> car_capacity;

    std::vector<double> cargo_weights = {100.5, 250.0, 75.2, 150.0}; // Пример масс грузов
    double total_weight = std::accumulate(cargo_weights.begin(), cargo_weights.end(), 0.0);

    if (total_weight > car_capacity) {
        std::cout << "Да, общая масса грузов превысила грузоподъемность." << std::endl;
    } else {
        std::cout << "Нет, общая масса грузов не превысила грузоподъемность." << std::endl;
    }

    return 0;
}
