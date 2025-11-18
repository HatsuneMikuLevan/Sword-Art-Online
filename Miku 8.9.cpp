

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a (1 < a < 1.5): ";
    std::cin >> a;

    int n = 1;
    while (1.0 + 1.0 / n >= a) {
        n++;
    }

    std::cout << "Наименьшее n: " << n << std::endl;

    return 0;
}
