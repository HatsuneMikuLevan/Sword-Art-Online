

#include <iostream>

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    double y;
    if (x < -1) {
        y = -1;
    } else if (x > -1) {
        y = x;
    } else { // x == -1
        y = 1;
    }

    std::cout << "Значение функции y(x) = " << y << std::endl;
    return 0;
}
