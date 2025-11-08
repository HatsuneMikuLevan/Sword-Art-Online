

#include <iostream>

int main() {
    double a;
    std::cout << "Введите вещественное число: ";
    std::cin >> a;

    if (a < 0) {
        a = -a;
    }

    std::cout << "Абсолютная величина числа: " << a << std::endl;

    return 0;
}
