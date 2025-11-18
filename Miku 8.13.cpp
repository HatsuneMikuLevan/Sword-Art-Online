

#include <iostream>
#include <iomanip>

int main() {
    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    double sum = 0.0;
    int n = 0;
    while (sum <= a) {
        n++;
        sum += 1.0 / n;
    }

    std::cout << "Наименьшее n: " << n << std::endl;

    return 0;
}
