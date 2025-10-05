#include <iostream>

int main() {
    double fahrenheit = 450.0;
    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    std::cout << "450 градусов по Фаренгейту - это " << celsius << " градусов по Цельсию." << std::cout;
    return 0;
}
