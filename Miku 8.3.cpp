

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a (0 < a <= 1): ";
    std::cin >> a;

    int znam = 1;
    std::cout << std::fixed << std::setprecision(5); // Для красивого вывода дробей
    while (1.0 / znam >= a) {
        std::cout << "1/" << znam << " (" << 1.0 / znam << ") ";
        znam++;
    }
    std::cout << std::endl;

    return 0;
}
