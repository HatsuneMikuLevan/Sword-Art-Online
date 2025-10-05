#include <iostream>

int main() {
    double temp_celsius;
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> temp_celsius;
    double temp_fahrenheit = temp_celsius * 1.8 + 32;
    double temp_kelvin = temp_celsius + 273.15;
    std::cout << "Температура по шкале Фаренгейта: " << temp_fahrenheit << std::endl;
    std::cout << "Температура по шкале Кельвина: " << temp_kelvin << std::endl;
    return 0;
}
