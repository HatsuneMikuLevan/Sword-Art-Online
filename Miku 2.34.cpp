#include <iostream>

int main() {
    double S, V1, V2;
    std::cout << "Введите расстояние S (км): ";
    std::cin >> S;
    std::cout << "Введите скорость V1 (км/ч): ";
    std::cin >> V1;
    std::cout << "Введите скорость V2 (км/ч): ";
    std::cin >> V2;
    double t = S / (V1 + V2);
    std::cout << "Время до встречи: " << t << " часов" << std::endl;
    return 0;
}
