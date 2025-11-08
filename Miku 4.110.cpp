

#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Введите четыре вещественных числа: ";
    std::cin >> a >> b >> c >> d;

    int count = 0;
    if (a < 0) {
        count++;
    }
    if (b < 0) {
        count++;
    }
    if (c < 0) {
        count++;
    }
    if (d < 0) {
        count++;
    }

    std::cout << "Количество отрицательных чисел: " << count << std::endl;

    return 0;
}
