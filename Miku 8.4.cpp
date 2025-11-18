

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a (0 < a <= 1): ";
    std::cin >> a;

    int znam = 1;
    while (1.0 / znam >= a) {
        znam++;
    }
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Первая дробь меньше a: 1/" << znam << " (" << 1.0 / znam << ")" << std::endl;

    return 0;
}
