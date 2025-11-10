

#include <iostream>

int main() {
    double perimeter = 0.0;
    for (int i = 0; i < 12; ++i) {
        double side_length;
        std::cout << "Введите длину стороны " << i + 1 << ": ";
        std::cin >> side_length;
        perimeter += side_length;
    }
    std::cout << "Периметр 12-угольника: " << perimeter << std::endl;
    return 0;
}
