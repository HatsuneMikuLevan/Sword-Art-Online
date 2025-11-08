

#include <iostream>
#include <cmath>

// Функция для определения абсолютной величины
double absolute(double x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    double a, b;
    std::cout << "Введите два вещественных числа: ";
    std::cin >> a >> b;

    // а) полусумма абсолютных величин
    double semi_sum = (absolute(a) + absolute(b)) / 2.0;
    std::cout << "Полусумма абсолютных величин: " << semi_sum << std::endl;

    // б) квадратный корень из произведения абсолютных величин
    double product_sqrt = sqrt(absolute(a) * absolute(b));
    std::cout << "Квадратный корень из произведения абсолютных величин: " << product_sqrt << std::endl;

    return 0;
}
