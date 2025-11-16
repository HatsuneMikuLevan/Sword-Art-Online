

#include <iostream>
#include <limits>

int main() {
    double max_speed = std::numeric_limits<double>::lowest();
    double current_speed;
    int num_cars = 20;

    for (int i = 0; i < num_cars; ++i) {
        std::cout << "Введите максимальную скорость автомобиля " << i + 1 << ": ";
        std::cin >> current_speed;
        if (current_speed > max_speed) {
            max_speed = current_speed;
        }
    }

    std::cout << "Максимальная скорость самого быстрого автомобиля: " << max_speed << std::endl;

    return 0;
}
