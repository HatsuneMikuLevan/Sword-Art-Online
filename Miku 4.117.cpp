

#include <iostream>

int main() {
    double a;
    std::cout << "Введите значение a: ";
    std::cin >> a;

    double z;
    if (a > 0) {
        z = 1;
    } else if (a == 0) {
        z = 0;
    } else { // a < 0
        z = -1;
    }

    std::cout << "Значение функции z(a) = " << z << std::endl;
    return 0;
}
