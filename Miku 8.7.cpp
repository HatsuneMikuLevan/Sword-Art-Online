

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a (1 < a < 1.5): ";
    std::cin >> a;

    int n = 2;
    while (1.0 + 1.0 / n >= a) {
        n++;
    }
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Первое число меньше a: 1+1/" << n << " (" << 1.0 + 1.0 / n << ")" << std::endl;

    return 0;
}
