

#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Введите четыре вещественных числа: ";
    std::cin >> a >> b >> c >> d;

    double sum = 0.0;
    if (a > 5) {
        sum += a;
    }
    if (b > 5) {
        sum += b;
    }
    if (c > 5) {
        sum += c;
    }
    if (d > 5) {
        sum += d;
    }

    std::cout << "Сумма чисел, больших пяти: " << sum << std::endl;

    return 0;
}
