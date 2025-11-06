
#include <iostream>
#include <cmath>
#include <iomanip>

// Функция для задачи (a)
double f_a(double x) {
    return pow(x, 4) + 2 * pow(x, 5) - x - 1;
}

// Функция для задачи (б)
double f_b(double x) {
    return pow(x, 3) - 0.2 * pow(x, 2) - 1.2;
}

void solve6_75() {
    double a, b, precision;
    
    // Задача (а)
    std::cout << "Задача (а): f(x) = x^4 + 2x^5 - x - 1 на отрезке [0, 1]" << std::endl;
    a = 0.0;
    b = 1.0;
    precision = 0.001;
    
    if (f_a(a) * f_a(b) > 0) {
        std::cout << "На этом отрезке нет корня." << std::endl;
    } else {
        double c;
        while (b - a >= precision) {
            c = a + (b - a) / 2;
            if (f_a(c) == 0.0) {
                break;
            } else if (f_a(c) * f_a(a) < 0) {
                b = c;
            } else {
                a = c;
            }
        }
        std::cout << "Приближенное значение корня: " << std::fixed << std::setprecision(4) << a + (b - a) / 2 << std::endl;
    }

    std::cout << "---" << std::endl;

    // Задача (б)
    std::cout << "Задача (б): f(x) = x^3 - 0.2x^2 - 1.2 на отрезке [1, 1.5]" << std::endl;
    a = 1.0;
    b = 1.5;
    precision = 0.001;

    if (f_b(a) * f_b(b) > 0) {
        std::cout << "На этом отрезке нет корня." << std::endl;
    } else {
        double c;
        while (b - a >= precision) {
            c = a + (b - a) / 2;
            if (f_b(c) == 0.0) {
                break;
            } else if (f_b(c) * f_b(a) < 0) {
                b = c;
            } else {
                a = c;
            }
        }
        std::cout << "Приближенное значение корня: " << std::fixed << std::setprecision(4) << a + (b - a) / 2 << std::endl;
    }
}
