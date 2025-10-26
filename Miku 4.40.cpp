#include <iostream>

int main() {
    double x;
    std::cout << "Введите число: ";
    std::cin >> x;

    if (x > -5 && x < 3) {
        std::cout << "Число принадлежит интервалу (-5, 3)." << std::endl;
    } else {
        std::cout << "Число не принадлежит интервалу (-5, 3)." << std::endl;
    }

    return 0;
}
