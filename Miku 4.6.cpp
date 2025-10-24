#include <iostream>

// Функция для задачи а)
double functionA(double x) {
    if (x < 0) {
        return 0;
    } else if (x <= 2) {
        return x;
    } else {
        return 2;
    }
}

// Функция для задачи б)
double functionB(double x) {
    if (x < 0) {
        return 0;
    } else if (x <= 3) {
        return -x;
    } else {
        return -3;
    }
}

int main() {
    double x_val;
    std::cout << "Введите значение x: ";
    std::cin >> x_val;

    std::cout << "Для задачи а): y = " << functionA(x_val) << std::endl;
    std::cout << "Для задачи б): y = " << functionB(x_val) << std::endl;

    return 0;
}
