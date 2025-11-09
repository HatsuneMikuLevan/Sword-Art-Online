

#include <iostream>

int main() {
    double y;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    double fy;
    if (y > 2) {
        fy = 2;
    } else if (y > 0 && y <= 2) {
        fy = 0;
    } else { // y <= 0
        fy = -3 * y;
    }

    std::cout << "Значение функции f(y) = " << fy << std::endl;
    return 0;
}
