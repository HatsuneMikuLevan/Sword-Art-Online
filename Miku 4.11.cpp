#include <iostream>

int main() {
    double speed_kmh, speed_ms;
    std::cout << "Введите скорость в км/ч: ";
    std::cin >> speed_kmh;
    std::cout << "Введите скорость в м/с: ";
    std::cin >> speed_ms;
    double speed_kmh_in_ms = speed_kmh / 3.6;
    if (speed_kmh_in_ms > speed_ms) {
        std::cout << "Первая скорость (в км/ч) больше." << std::endl;
    } else if (speed_ms > speed_kmh_in_ms) {
        std::cout << "Вторая скорость (в м/с) больше." << std::endl;
    } else {
        std::cout << "Скорости равны." << std::endl;
    }
    return 0;
}
