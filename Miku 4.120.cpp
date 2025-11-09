

#include <iostream>
#include <cmath>

// Функция для задачи 4.120 (a)
double solve_4_120_a(double x) {
    return (x < -1) ? 0 : ((x <= 0) ? (x + 1) : 1);
}

// Функция для задачи 4.120 (б)
double solve_4_120_b(double x) {
    return (x < -1) ? 1 : ((x <= 0) ? -x : ((x < 1) ? x : 0));
}

// Функция для задачи 4.120 (в)
double solve_4_120_c(double x) {
    return (x <= -1) ? (-x - 1) : ((x <= 0) ? (x + 1) : ((x <= 1) ? (-x + 1) : (x - 1)));
}

int main() {
    double x_val = 0.5; // Пример значения x

    std::cout << "Для x = " << x_val << ":" << std::endl;
    std::cout << "Задача 4.120 (a): y = " << solve_4_120_a(x_val) << std::endl;
    std::cout << "Задача 4.120 (б): y = " << solve_4_120_b(x_val) << std::endl;
    std::cout << "Задача 4.120 (в): y = " << solve_4_120_c(x_val) << std::endl;

    return 0;
}
